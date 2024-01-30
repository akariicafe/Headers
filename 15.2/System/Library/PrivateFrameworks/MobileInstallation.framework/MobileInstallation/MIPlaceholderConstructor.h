@class NSArray, NSDictionary, NSURL, NSData;

@interface MIPlaceholderConstructor : NSObject

@property (nonatomic) unsigned long long placeholderType;
@property (retain, nonatomic) NSURL *bundleURL;
@property (retain, nonatomic) NSDictionary *partialInfoPlist;
@property (retain, nonatomic) NSData *installUUID;
@property (retain, nonatomic) NSData *installSessionUUID;
@property (copy, nonatomic) NSDictionary *entitlements;
@property (nonatomic) BOOL isLaunchProhibited;
@property (copy, nonatomic) NSArray *pluginPlaceholderConstructors;
@property (retain, nonatomic) NSURL *substituteIconFileURL;
@property (nonatomic) BOOL performPlaceholderInstallActions;
@property (nonatomic) unsigned long long iconPreservationLevel;

+ (id)_iconKeys;
+ (id)_infoPlistKeysToLoad;

- (id)initWithSource:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)materializeIntoBundleDirectory:(id)a0 error:(id *)a1;
- (BOOL)_introspectWithError:(id *)a0;
- (BOOL)_loadPartialInfoPlistWithError:(id *)a0;
- (id)_entitlementsForPath:(id)a0 error:(id *)a1;
- (BOOL)_populatePluginPlaceholderConstructorsWithError:(id *)a0;
- (BOOL)_writeInfoPlistToPlaceholder:(id)a0 withError:(id *)a1;
- (BOOL)_writeIconToPlaceholder:(id)a0 error:(id *)a1;
- (BOOL)_copyStringsToPlaceholder:(id)a0 error:(id *)a1;
- (BOOL)_transferAndUpdateInstallSessionIDsToPlaceholder:(id)a0 error:(id *)a1;

@end
