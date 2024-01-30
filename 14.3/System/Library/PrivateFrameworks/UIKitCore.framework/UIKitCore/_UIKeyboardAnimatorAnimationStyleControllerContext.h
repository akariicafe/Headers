@class NSString, UIInputViewSetPlacement, UIView;
@protocol UIInputViewAnimationHost;

@interface _UIKeyboardAnimatorAnimationStyleControllerContext : NSObject <_UIKeyboardAnimatorState> {
    id<UIInputViewAnimationHost> _host;
    UIInputViewSetPlacement *_start;
    UIInputViewSetPlacement *_end;
}

@property (readonly, retain, nonatomic) UIView *animatingView;
@property (nonatomic) BOOL inputViewsHidden;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHost:(id)a0 startPlacement:(id)a1 endPlacement:(id)a2;
- (void)complete;

@end
