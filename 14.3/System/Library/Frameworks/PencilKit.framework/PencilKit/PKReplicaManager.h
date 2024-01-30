@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PKReplicaManager : NSObject {
    NSObject<OS_dispatch_queue> *_uuidAccessQueue;
    NSMutableOrderedSet *_replicaUUIDs;
    NSMutableDictionary *_replicaEntries;
    NSMutableArray *_replicaManagerErrors;
    id /* block */ _saveStateBlock;
    BOOL _dirtyTokenSet;
    BOOL _shouldPersist;
}

@property (nonatomic) BOOL testMode;
@property (readonly, nonatomic) NSArray *replicaManagerErrors;

+ (id)sharedReplicaManager;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)_loadState;
- (void)_applicationWillTerminate;
- (id)checkoutReplicaUUIDForDrawing:(id)a0;
- (void)returnReplicaForDrawing:(id)a0;
- (void)updateVersionForDrawing:(id)a0;
- (void)persistIfNeeded;
- (void)_saveStateImmediately;
- (void)_setReplicasDirtyToken;
- (void)_scheduleSaveState;
- (BOOL)isValidBundleIDForSaving:(id)a0;
- (void)_resetAllReplicaUUIDs;

@end
