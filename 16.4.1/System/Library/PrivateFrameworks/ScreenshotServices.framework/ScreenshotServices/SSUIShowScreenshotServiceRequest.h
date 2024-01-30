@class SSUIServiceOptions;

@interface SSUIShowScreenshotServiceRequest : SSUIServiceRequest

@property (retain, nonatomic) SSUIServiceOptions *options;

+ (id)entitlement;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;

@end
