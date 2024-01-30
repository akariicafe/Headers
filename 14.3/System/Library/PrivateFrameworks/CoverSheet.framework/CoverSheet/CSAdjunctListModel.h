@class NSString, NSMutableDictionary, NSMutableSet;
@protocol CSAdjunctListModelDelegate, SBFActionProviding;

@interface CSAdjunctListModel : NSObject <SBFActionHandling> {
    NSMutableDictionary *_identifiersToItems;
    NSMutableSet *_pendingActions;
    BOOL _suspended;
}

@property (weak, nonatomic) id<CSAdjunctListModelDelegate> delegate;
@property (weak, nonatomic) id<SBFActionProviding> contentActionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_handleLockScreenContentAction:(id)a0;
- (void)dealloc;
- (id)_itemForAction:(id)a0;
- (void)_replayPendingChanges;
- (BOOL)handlesActionWithClass:(Class)a0;
- (void)_removeItemForAction:(id)a0;
- (void)_handleLockScreenContentActionInvalidation:(id)a0;
- (void)suspendItemHandling;
- (BOOL)handleAction:(id)a0 forProvider:(id)a1;
- (BOOL)_actionIsInRelevantSlot:(id)a0;
- (void)resumeItemHandling;
- (void)_handleLockScreenContentActionAddition:(id)a0;
- (id)_createItemForAction:(id)a0;

@end
