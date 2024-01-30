@class NSString;

@interface SSUIRunPPTServiceRequest : SSUIServiceRequest

@property (copy, nonatomic) NSString *testName;
@property (nonatomic) unsigned long long numberOfRequiredScreenshots;

+ (id)entitlement;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;

@end
