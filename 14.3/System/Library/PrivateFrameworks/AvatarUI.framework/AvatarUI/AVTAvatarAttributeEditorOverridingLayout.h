@class NSString;
@protocol AVTAvatarAttributeEditorLayout;

@interface AVTAvatarAttributeEditorOverridingLayout : NSObject <AVTAvatarAttributeEditorLayout>

@property (readonly, nonatomic) id<AVTAvatarAttributeEditorLayout> backingLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatarContainerFrame;
@property (nonatomic) double avatarContainerAlpha;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } attributesContentViewFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } containerSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsets;
@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) BOOL RTL;
@property (readonly, copy, nonatomic) NSString *contentSizeCategory;
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
- (id)initWithLayout:(id)a0;

@end
