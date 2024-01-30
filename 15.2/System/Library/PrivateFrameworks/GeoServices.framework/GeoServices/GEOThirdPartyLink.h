@class NSString, NSURL;

@interface GEOThirdPartyLink : NSObject

@property (readonly, nonatomic) NSString *adamID;
@property (readonly, nonatomic) NSURL *url;

+ (id)thirdPartyLinkFromProto:(id)a0;

- (id)initWithAdamID:(id)a0 url:(id)a1;
- (void).cxx_destruct;

@end
