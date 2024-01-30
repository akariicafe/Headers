@class NSString;

@interface SSUIRunPPTServiceRequest : SSUIServiceRequest

@property (copy, nonatomic) NSString *testName;
@property (nonatomic) unsigned long long numberOfRequiredScreenshots;

+ (id)entitlement;

- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)a0;

@end
