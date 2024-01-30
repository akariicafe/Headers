@class FSNode, NSString, NSUUID, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface _LSDatabase : NSObject {
    struct LSSchema { unsigned int headerTable; unsigned int bundleTable; unsigned int claimTable; unsigned int serviceTable; unsigned int utypeTable; struct { struct CSMap { unsigned int table; struct CSMapCallbacks { void /* function */ *retainKey; void /* function */ *releaseKey; void /* function */ *getKeyHash; void /* function */ *keyMatchesData; void /* function */ *retainValue; void /* function */ *releaseValue; } cb; struct CSMapContext *context; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; unsigned int _generation; struct _CSMapHeader *_header; unsigned int *_keys; unsigned int *_values; } map; } bindableKeyMap; struct { struct CSMap { unsigned int table; struct CSMapCallbacks { void /* function */ *retainKey; void /* function */ *releaseKey; void /* function */ *getKeyHash; void /* function */ *keyMatchesData; void /* function */ *retainValue; void /* function */ *releaseValue; } cb; struct CSMapContext *context; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; unsigned int _generation; struct _CSMapHeader *_header; unsigned int *_keys; unsigned int *_values; } map; unsigned int bindingClass; unsigned char isCaseInsensitive; } bindingMaps[12]; unsigned int handlerPrefTable; unsigned int containerTable; unsigned int aliasTable; unsigned int pluginTable; unsigned int extensionPointTable; unsigned int bindingListTable; unsigned int propertyListTable; unsigned int localizedStringTable; unsigned int canonicalStringTable; struct _LSSchemaCache *_cache; } schema;
    unsigned char needsUpdate : 1;
    unsigned char isForcedForXCTesting : 1;
    unsigned char isForcedForRemoteUpdates : 1;
}

@property (class, readonly, nonatomic) NSString *headerTableName;
@property (class, readonly, nonatomic) unsigned int sessionStatus;

@property (readonly, nonatomic) NSDate *dateInitialized;
@property (readonly, nonatomic) FSNode *node;
@property (readonly, nonatomic) unsigned int userID;
@property (readonly, nonatomic) struct __CSStore { } *store;
@property (readonly, nonatomic) struct LSSchema { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { struct CSMap { unsigned int x0; struct CSMapCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x1; struct CSMapContext *x2; struct os_unfair_lock_s { unsigned int x0; } x3; unsigned int x4; struct _CSMapHeader *x5; unsigned int *x6; unsigned int *x7; } x0; } x5; struct { struct CSMap { unsigned int x0; struct CSMapCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x1; struct CSMapContext *x2; struct os_unfair_lock_s { unsigned int x0; } x3; unsigned int x4; struct _CSMapHeader *x5; unsigned int *x6; unsigned int *x7; } x0; unsigned int x1; unsigned char x2; } x6[12]; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; struct _LSSchemaCache *x16; } *schema;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) NSUUID *cacheGUID;
@property (nonatomic, getter=isSeeded) BOOL seeded;
@property (nonatomic, getter=isSeedingComplete) BOOL seedingComplete;
@property (readonly, nonatomic) NSString *seededSystemVersion;
@property (readonly, nonatomic) NSString *seededModelCode;
@property (nonatomic, getter=arePrefsLoaded) BOOL prefsLoaded;
@property (nonatomic) BOOL applicationsChanged;
@property (nonatomic) BOOL documentTypesChanged;
@property (nonatomic) BOOL URLTypesChanged;
@property (nonatomic) BOOL typeDeclarationsChanged;

+ (void)setSeedingInProgress:(BOOL)a0;

- (void)registerCanonicalNamesFromStringLocalizer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)getCacheGUIDBytes:(unsigned char[16])a0;
- (void)dealloc;
- (void)registerCanonicalNames;
- (id)description;
- (id)_init;
- (void)claimDidChange:(unsigned int)a0;
- (void)applicationWillBeUninstalled:(unsigned int)a0;
- (void)applicationWasInstalled:(unsigned int)a0;

@end
