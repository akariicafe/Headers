@class NSSet, NSDictionary, CSSearchableIndex, NSObject, VCSpotlightState;
@protocol OS_dispatch_queue, OS_os_transaction, VCSpotlightSyncOperationDelegate;

@interface VCSpotlightSyncOperation : NSObject

@property (readonly, nonatomic) NSDictionary *searchableItemRegistry;
@property (readonly, nonatomic) NSSet *identifiersToRemove;
@property (readonly, nonatomic) NSDictionary *keyedReferences;
@property (readonly, nonatomic) BOOL fullResync;
@property (readonly, nonatomic) VCSpotlightState *localState;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) CSSearchableIndex *index;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (weak, nonatomic) id<VCSpotlightSyncOperationDelegate> delegate;

+ (void)_fillIdentifiersToRemove:(id *)a0 searchableItemRegistry:(id *)a1 withMaximumUpdatedItems:(long long)a2 references:(id)a3 localState:(id)a4;

- (id)init;
- (void).cxx_destruct;
- (void)clearLocalStateAndExit;
- (void)deleteSpotlightFileAndCleanup;
- (void)indexSearchableItems;
- (id)initWithReferences:(id)a0 forceFullResync:(BOOL)a1 spotlightIndex:(id)a2 localState:(id)a3;
- (void)start;
- (void)cleanupAndExitWithRequestToRelaunch:(BOOL)a0;
- (id)initWithModifiedReferences:(id)a0 inserted:(id)a1 removed:(id)a2 spotlightIndex:(id)a3 localState:(id)a4;
- (void)saveLocalState;

@end
