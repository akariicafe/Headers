@class NSArray, CUIKEditingContextGroup, CUIKEditingManager;
@protocol CUIKDecisionDelegate, CUIKEditingContextObserver, CUIKUndoDelegate, CUIKCommitDelegate;

@interface CUIKEditingContext : NSObject

@property unsigned long long interfaceType;
@property (retain) NSArray *objectsBeingEdited;
@property (weak) id<CUIKEditingContextObserver> observer;
@property BOOL isActive;
@property BOOL isOpen;
@property (retain) NSArray *pendingObserverUpdates;
@property (retain) NSArray *pendingGroupUpdates;
@property (weak) CUIKEditingContextGroup *group;
@property (weak) CUIKEditingManager *editingManager;
@property (weak) id<CUIKDecisionDelegate> decisionDelegate;
@property (weak) id<CUIKUndoDelegate> undoDelegate;
@property (weak) id<CUIKCommitDelegate> commitDelegate;

- (void).cxx_destruct;

@end
