@class SearchUIRowModel, NSString, UIView;
@protocol SearchUIFeedbackDelegateInternal;

@interface SearchUIDragSource : NSObject <UIDragInteractionDelegate, UIDragInteractionDelegate_Private>

@property (weak) UIView *dragSourceView;
@property (weak) id<SearchUIFeedbackDelegateInternal> feedbackDelegate;
@property (retain, nonatomic) SearchUIRowModel *dragObject;
@property (retain, nonatomic) UIView *overrideDragPreviewView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dragSourceForView:(id)a0 dragObject:(id)a1 feedbackDelegate:(id)a2;

- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (BOOL)dragInteraction:(id)a0 sessionAllowsMoveOperation:(id)a1;
- (long long)_dragInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (id)_requiredContextIDsForDragSessionInView:(id)a0;
- (BOOL)isMailDrag;
- (void)sendDragFeedback;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (id)dragParametersForPreviewView:(id)a0;
- (BOOL)dragInteraction:(id)a0 sessionIsRestrictedToDraggingApplication:(id)a1;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (BOOL)_shouldPerformHitTestingForDragSessionInView:(id)a0;
- (id)initWithView:(id)a0 dragObject:(id)a1 feedbackDelegate:(id)a2;
- (void).cxx_destruct;

@end
