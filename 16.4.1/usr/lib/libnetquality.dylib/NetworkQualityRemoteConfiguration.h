@class NSString, NSDictionary, NetworkQualityConfiguration;

@interface NetworkQualityRemoteConfiguration : NSObject {
    NSDictionary *_urls;
    NetworkQualityConfiguration *_config;
}

@property (retain, nonatomic) NSString *resolver;
@property (retain, nonatomic) NSString *targetDomain;
@property (retain, nonatomic) NSString *testEndpoint;
@property (retain, nonatomic) NSString *interfaceName;

+ (BOOL)isAppleInternal;
+ (id)networkQualityConfigurationURL;

- (void).cxx_destruct;
- (BOOL)DNSConfigured;
- (id)portForURLType:(int)a0;
- (id)URLForURLType:(int)a0;
- (id)initWithData:(id)a0 andConfig:(id)a1;
- (id)initWithDictionary:(id)a0 andConfig:(id)a1;
- (id)testEndpoint:(int)a0;

@end
