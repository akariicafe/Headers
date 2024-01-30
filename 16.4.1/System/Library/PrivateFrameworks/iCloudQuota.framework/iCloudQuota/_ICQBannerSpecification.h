@class NSString, NSDictionary, NSArray, NSURL;

@interface _ICQBannerSpecification : NSObject {
    NSDictionary *_serverDict;
}

@property (readonly, nonatomic) NSDictionary *messageTemplates;
@property (readonly, nonatomic) NSDictionary *titleTemplates;
@property (readonly, nonatomic) NSDictionary *iconDetails;
@property (retain, nonatomic) NSString *linksFormat;
@property (retain, nonatomic) NSArray *links;
@property (readonly, nonatomic) BOOL isDetailBannerInfoAvailable;
@property (readonly, nonatomic) BOOL placeholderExists;
@property (retain, nonatomic) NSURL *serverUIURL;
@property (readonly, nonatomic) NSURL *dynamicUIRouteURL;
@property (readonly, nonatomic) NSString *purchaseAttribution;

+ (id)bannerSpecificationSampleForLevel:(long long)a0;

- (id)iconPath;
- (id)initWithServerDictionary:(id)a0;
- (void).cxx_destruct;
- (id)messageWithKey:(id)a0;
- (id)_bannerSpecificationParams;
- (id)initWithDetailBannerInfo:(id)a0;
- (void)setMessageWithServerMessage:(id)a0;
- (id)titleWithKey:(id)a0;

@end
