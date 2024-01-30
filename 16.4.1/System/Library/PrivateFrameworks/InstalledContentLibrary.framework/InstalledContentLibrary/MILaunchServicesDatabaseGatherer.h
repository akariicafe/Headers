@class NSString, NSMutableSet;

@interface MILaunchServicesDatabaseGatherer : NSObject <MIFilesystemScannerDelegate>

@property (readonly, nonatomic) NSMutableSet *coreServices;
@property (readonly, nonatomic) NSMutableSet *systemApps;
@property (readonly, nonatomic) NSMutableSet *userApps;
@property (readonly, nonatomic) NSMutableSet *internalApps;
@property (readonly, nonatomic) NSMutableSet *appExtensions;
@property (readonly, nonatomic) NSMutableSet *frameworks;
@property (readonly, nonatomic) NSMutableSet *systemAppPlaceholders;
@property (readonly, nonatomic) id /* block */ enumerator;
@property (readonly, nonatomic) unsigned long long gatherOptions;
@property (readonly, nonatomic) BOOL shouldUpdateAppExtensionDataContainersWithParentID;
@property (readonly, nonatomic) NSString *personaUniqueString;

+ (id)entryForBundle:(id)a0 inContainer:(id)a1 withError:(id *)a2;
+ (BOOL)enumerateAppExtensionsInBundle:(id)a0 updatingAppExtensionParentID:(BOOL)a1 ensureAppExtensionsAreExecutable:(BOOL)a2 installProfiles:(BOOL)a3 error:(id *)a4 enumerator:(id /* block */)a5;
+ (id)fetchInfoForBundle:(id)a0 inContainer:(id)a1 withError:(id *)a2;

- (void).cxx_destruct;
- (void)errorOccurred:(id)a0;
- (BOOL)_markDriverKitExtensionsExecutableInBundle:(id)a0 withError:(id *)a1;
- (BOOL)_scanAppExtensionsInBundle:(id)a0 inBundleContainer:(id)a1 withError:(id *)a2;
- (BOOL)_scanBundle:(id)a0 inContainer:(id)a1 addingToBundleSet:(id)a2 enumeratingEntry:(id)a3 withError:(id *)a4;
- (id)_setForEntry:(id)a0;
- (id)initWithOptions:(unsigned long long)a0 enumerator:(id /* block */)a1;
- (id)initWithOptions:(unsigned long long)a0 personaUniqueString:(id)a1 enumerator:(id /* block */)a2;
- (BOOL)performGatherWithError:(id *)a0;
- (BOOL)scanAppExtensionsInFrameworkBundle:(id)a0 withError:(id *)a1;
- (BOOL)scanExecutableBundle:(id)a0 inContainer:(id)a1 withError:(id *)a2;

@end
