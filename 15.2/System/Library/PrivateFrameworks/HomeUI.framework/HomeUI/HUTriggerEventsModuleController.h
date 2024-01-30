@class NSString;
@protocol HUTriggerEventsModuleControllerDelegate;

@interface HUTriggerEventsModuleController : HUItemTableModuleController <HUEventUIFlowDelegate, HUEventUIFlowPresentationController>

@property (weak, nonatomic) id<HUTriggerEventsModuleControllerDelegate> delegate;
@property (nonatomic) BOOL allowsEditingEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)didSelectItem:(id)a0;
- (void)transitionToViewController:(id)a0;
- (id)initWithModule:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (id)trailingSwipeActionsForItem:(id)a0;
- (void)eventFlowDidCancel:(id)a0;
- (void)eventFlow:(id)a0 didFinishWithEventBuilderItem:(id)a1;
- (void)deleteItem:(id)a0 completionHandler:(id /* block */)a1;

@end
