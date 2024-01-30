@class NSArray, NSString, NSURL, NSDictionary;

@interface PKWebServiceSharingFeature : PKWebServiceRegionFeature

@property (readonly, nonatomic) NSArray *activationCodeConfigurations;
@property (readonly, nonatomic) unsigned long long relayServerPasswordLength;
@property (readonly, nonatomic) NSString *relayServerHost;
@property (readonly, nonatomic) NSArray *allowedRelayServerHosts;
@property (readonly, nonatomic) NSArray *relayServerHostsToHandleUniversalLinks;
@property (readonly, nonatomic) NSURL *staticContentBaseURL;
@property (readonly, nonatomic) NSDictionary *openGraphPreviewUrls;
@property (readonly, nonatomic) BOOL enabled;

- (id)initWithDictionary:(id)a0 region:(id)a1;
- (void).cxx_destruct;

@end
