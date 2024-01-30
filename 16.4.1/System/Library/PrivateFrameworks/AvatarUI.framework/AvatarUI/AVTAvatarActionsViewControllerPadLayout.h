@protocol AVTViewLayoutInfo;

@interface AVTAvatarActionsViewControllerPadLayout : NSObject <AVTAvatarActionsViewControllerLayout>

@property (readonly, nonatomic) struct CGSize { double width; double height; } containerSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (readonly, nonatomic) long long buttonCount;
@property (readonly, nonatomic) double actionButtonsViewAlpha;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } actionButtonsViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } avatarContainerViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } userInfoFrame;
@property (readonly, nonatomic) id<AVTViewLayoutInfo> avtViewLayout;

+ (double)buttonHeight;
+ (double)heightForButtonsViewWithButtonCount:(long long)a0;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })actionButtonsViewFrameForButtonCount:(long long)a0;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 buttonCount:(long long)a2 avtViewLayoutInfo:(id)a3;

@end
