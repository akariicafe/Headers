@class NSString, UIView;

@interface _UIGravityWellAdaptorInteraction : NSObject <UIInteraction>

@property (readonly, weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToView:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToView:(id)a0;

@end
