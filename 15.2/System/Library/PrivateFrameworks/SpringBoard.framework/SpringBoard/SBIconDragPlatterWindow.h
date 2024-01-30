@class UIView;

@interface SBIconDragPlatterWindow : SBSecureMainScreenActiveInterfaceOrientationWindow <SBIconDragPreviewContaining>

@property (readonly, nonatomic) UIView *iconDragPreviewContainerView;

@end
