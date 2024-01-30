@class IMUnitTestLogger;

@interface IMUnitTestBundleLoader : NSObject

@property (readonly) IMUnitTestLogger *logger;

- (void).cxx_destruct;
- (id)initWithLogger:(id)a0;
- (BOOL)loadTestBundle:(id)a0 bundle:(id *)a1 error:(id *)a2;

@end
