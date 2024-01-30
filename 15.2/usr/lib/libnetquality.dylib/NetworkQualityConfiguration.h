@class NSString, NSDictionary;

@interface NetworkQualityConfiguration : NSObject {
    NSDictionary *_urls;
}

@property (retain, nonatomic) NSString *resolver;
@property (retain, nonatomic) NSString *targetDomain;
@property (retain, nonatomic) NSString *testEndpoint;

+ (BOOL)isAppleInternal;
+ (id)defaultURL;
+ (id)environment;
+ (id)defaultURL:(BOOL)a0;
+ (id)defaultURLZeroRated;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)URLForURLType:(int)a0;
- (id)testEndPoint:(int)a0;
- (id)portForURLType:(int)a0;
- (BOOL)DNSConfigured;

@end
