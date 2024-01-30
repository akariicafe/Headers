@class IMUnitTestBundleLoader, IMUnitTestLogger;

@interface IMUnitTestFrameworkLoader : NSObject

@property BOOL xctestFrameworkLoaded;
@property (readonly, nonatomic) IMUnitTestBundleLoader *bundleLoader;
@property (readonly) IMUnitTestLogger *logger;

- (void).cxx_destruct;
- (BOOL)findFrameworkPathsWithFrameworkNames:(id)a0 searchPaths:(id)a1 outFrameworkPaths:(id *)a2 error:(id *)a3;
- (BOOL)frameworkExistsAtPath:(id)a0;
- (id)frameworkSearchPaths;
- (id)initWithLogger:(id)a0 bundleLoader:(id)a1;
- (BOOL)loadFrameworkNamesFromTextFile:(id)a0 outNames:(id *)a1 error:(id *)a2;
- (BOOL)loadFrameworks:(id)a0 outError:(id *)a1;
- (BOOL)loadTestFrameworks:(id *)a0;
- (BOOL)loadXCTestFramework:(id *)a0;
- (BOOL)loadXCTestFrameworkFromSDK:(id *)a0;
- (BOOL)readXCTestFrameworkDependencies:(id *)a0 error:(id *)a1;

@end
