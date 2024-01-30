@class NSURL, WFHarnessTestCase, NSString;

@interface WFHarnessTestRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) NSURL *testRunnerURL;
@property (readonly, nonatomic) BOOL holdingSecurityScopedAccess;
@property (retain, nonatomic) WFHarnessTestCase *testCase;
@property (readonly, nonatomic) NSURL *testBundleURL;
@property (readonly, copy, nonatomic) NSString *xcTestClass;
@property (readonly, copy, nonatomic) NSString *testIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTestBundleURL:(id)a0 testRunnerURL:(id)a1 xcTestClass:(id)a2 testIdentifier:(id)a3;
- (void)createWorkflowWithEnvironment:(long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithTestBundleURL:(id)a0 xcTestClass:(id)a1 testIdentifier:(id)a2;
- (id)loadTestCaseWithError:(id *)a0;

@end
