@class UIDragInteraction, NSString;
@protocol SXDragManagerDataSource;

@interface SXDragManager : NSObject <UIDragInteractionDelegate>

@property (readonly, nonatomic) unsigned long long sharingPolicy;
@property (readonly, nonatomic) UIDragInteraction *dragInteraction;
@property (weak, nonatomic) id<SXDragManagerDataSource> dataSource;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (void).cxx_destruct;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (void)dealloc;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (void)dragInteraction:(id)a0 session:(id)a1 willAddItems:(id)a2 forInteraction:(id)a3;
- (id)dragInteraction:(id)a0 itemsForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)dragInteraction:(id)a0 session:(id)a1 didEndWithOperation:(unsigned long long)a2;
- (id)initWithSharingPolicy:(unsigned long long)a0 dataSource:(id)a1;
- (void)updateAccessibilityDragSourceDescriptorsForDraggableElement:(id)a0;
- (id)itemsForSession:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)dragItemForObject:(id)a0 withSession:(id)a1;
- (BOOL)dragSession:(id)a0 containsDragItemWithIdentifier:(id)a1;

@end
