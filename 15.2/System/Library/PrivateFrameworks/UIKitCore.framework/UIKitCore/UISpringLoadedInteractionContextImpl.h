@class UIView, NSString, UISpringLoadedGestureRecognizer;
@protocol UIDropSession;

@interface UISpringLoadedInteractionContextImpl : NSObject <UISpringLoadedInteractionContext_Internal>

@property (nonatomic) long long state;
@property (weak, nonatomic) UISpringLoadedGestureRecognizer *currentRecognizer;
@property (retain, nonatomic) UIView *overrideTargetView;
@property (retain, nonatomic) id overrideTargetItem;
@property (readonly, nonatomic) id<UIDropSession> dropSession;
@property (retain, nonatomic) UIView *targetView;
@property (retain, nonatomic) id targetItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void).cxx_destruct;

@end
