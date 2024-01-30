@class NSString;

@interface AVTAvatarAttributeEditorLayout : NSObject <AVTAvatarAttributeEditorLayout>

@property (readonly, nonatomic) struct CGSize { double width; double height; } containerSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) BOOL RTL;
@property (readonly, copy, nonatomic) NSString *contentSizeCategory;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } avatarContainerFrame;
@property (readonly, nonatomic) double avatarContainerAlpha;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } attributesContentViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } userInfoFrame;
@property (readonly, nonatomic) double headerMaskingViewAlpha;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } headerMaskingViewFrame;
@property (readonly, nonatomic) double verticalRuleAlpha;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } verticalRuleFrame;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } attributesContentViewInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } attributesContentViewScrollIndicatorInsets;
@property (readonly, nonatomic) unsigned long long supportedLayoutOrientation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } groupDialContainerFrame;
@property (readonly, nonatomic) BOOL showSideGroupPicker;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sideGroupContainerFrame;

- (void).cxx_destruct;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 screenScale:(double)a2 RTL:(BOOL)a3 showSideGroupPicker:(BOOL)a4;
- (id)backgroundColor;
- (void)raiseExceptionForPropertyString:(id)a0;

@end
