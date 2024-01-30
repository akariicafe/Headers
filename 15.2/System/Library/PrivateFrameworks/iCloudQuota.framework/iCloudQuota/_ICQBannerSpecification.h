@class NSString, NSDictionary, NSArray, NSURL;

@interface _ICQBannerSpecification : NSObject {
    NSDictionary *_serverDict;
}

@property (readonly, nonatomic) NSDictionary *messageTemplates;
@property (readonly, nonatomic) NSDictionary *titleTemplates;
@property (retain, nonatomic) NSString *linksFormat;
@property (retain, nonatomic) NSArray *links;
@property (readonly, nonatomic) BOOL isDetailBannerInfoAvailable;
@property (readonly, nonatomic) BOOL placeholderExists;
@property (retain, nonatomic) NSURL *remoteUIURL;

+ (id)bannerSpecificationSampleForLevel:(long long)a0;

- (id)initWithDetailBannerInfo:(id)a0;
- (id)initWithServerDictionary:(id)a0;
- (void)setMessageWithServerMessage:(id)a0;
- (id)messageWithKey:(id)a0;
- (void).cxx_destruct;
- (id)titleWithKey:(id)a0;

@end
