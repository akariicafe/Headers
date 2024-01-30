@class NSString, UIView;
@protocol UIPointerInteractionDelegate;

@interface _UIAssistantEntry : NSObject <UIPointerInteractionDelegate>

@property (weak, nonatomic) UIView<UIPointerInteractionDelegate> *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (id)initWithView:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void).cxx_destruct;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;

@end
