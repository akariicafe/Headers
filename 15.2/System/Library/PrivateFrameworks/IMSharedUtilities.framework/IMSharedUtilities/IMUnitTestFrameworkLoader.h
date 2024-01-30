@class IMUnitTestBundleLoader, IMUnitTestLogger;

@interface IMUnitTestFrameworkLoader : NSObject

@property BOOL xctestFrameworkLoaded;
@property (readonly, nonatomic) IMUnitTestBundleLoader *bundleLoader;
@property (readonly) IMUnitTestLogger *logger;

- (BOOL)loadFrameworkNamesFromTextFile:(id)a0 outNames:(id *)a1 error:(id *)a2;
- (id)frameworkSearchPaths;
- (BOOL)findFrameworkPathsWithFrameworkNames:(id)a0 searchPaths:(id)a1 outFrameworkPaths:(id *)a2 error:(id *)a3;
- (BOOL)loadFrameworks:(id)a0 outError:(id *)a1;
- (BOOL)readXCTestFrameworkDependencies:(id *)a0 error:(id *)a1;
- (BOOL)loadXCTestFramework:(id *)a0;
- (BOOL)frameworkExistsAtPath:(id)a0;
- (BOOL)loadXCTestFrameworkFromSDK:(id *)a0;
- (void).cxx_destruct;
- (id)initWithLogger:(id)a0 bundleLoader:(id)a1;
- (BOOL)loadTestFrameworks:(id *)a0;

@end
