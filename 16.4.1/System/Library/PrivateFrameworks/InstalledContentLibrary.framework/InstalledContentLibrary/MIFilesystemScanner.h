@class NSString;
@protocol MIFilesystemScannerDelegate;

@interface MIFilesystemScanner : NSObject

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (weak, nonatomic) id<MIFilesystemScannerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_scanAppsDirectory:(id)a0 withError:(id *)a1;
- (BOOL)_scanBundleContainersWithClass:(unsigned long long)a0 withError:(id *)a1 ignoredErrorOccurredOnOneOrMoreItems:(BOOL *)a2;
- (BOOL)_scanFrameworkDirectory:(id)a0 withError:(id *)a1;
- (BOOL)_scanFrameworksLocationsWithError:(id *)a0;
- (id)initWithScanOptions:(unsigned long long)a0;
- (id)initWithScanOptions:(unsigned long long)a0 personaUniqueString:(id)a1;
- (BOOL)performScanWithError:(id *)a0;

@end
