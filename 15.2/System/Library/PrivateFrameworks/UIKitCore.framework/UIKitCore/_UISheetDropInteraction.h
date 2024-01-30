@class NSMapTable, UIPresentationController, NSString, UIView, UIDropInteraction;
@protocol _UISheetDropInteractionDelegate;

@interface _UISheetDropInteraction : NSObject <UIDropInteractionDelegate, UIInteraction>

@property (readonly, nonatomic) UIDropInteraction *dropInteraction;
@property (readonly, nonatomic) NSMapTable *activityTypesOrActivities;
@property (retain, nonatomic) UIPresentationController *presentationController;
@property (readonly, weak, nonatomic) id<_UISheetDropInteractionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)didMoveToView:(id)a0;
- (id)_activityTypeForSession:(id)a0;
- (void)_activityForSession:(id)a0 completion:(id /* block */)a1;
- (void)willMoveToView:(id)a0;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (void)_removeActivityTypeOrActivityForSession:(id)a0;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void)dropInteraction:(id)a0 item:(id)a1 willAnimateDropWithAnimator:(id)a2;
- (void).cxx_destruct;

@end
