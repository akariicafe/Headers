@class _UIPlatterView, UIWindow, UIView;

@interface _UIContextMenuPresentation : _UIClickPresentation

@property (retain, nonatomic) UIView *dragContainer;
@property (retain, nonatomic) _UIPlatterView *destinationPlatterView;
@property (copy, nonatomic) id /* block */ postDismissItemUpdate;
@property (copy, nonatomic) id /* block */ postDismissCleanUp;
@property (nonatomic) BOOL suppressInputViewDuringPresentation;
@property (retain, nonatomic) UIView *dragAnimationPortalView;
@property (retain, nonatomic) UIWindow *dragAnimationWindow;

- (void).cxx_destruct;

@end
