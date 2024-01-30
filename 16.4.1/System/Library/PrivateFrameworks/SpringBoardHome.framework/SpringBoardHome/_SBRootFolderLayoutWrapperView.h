@class UIView;

@interface _SBRootFolderLayoutWrapperView : SBFTouchPassThroughView

@property (nonatomic) double statusBarHeightAdjustment;
@property (nonatomic) double headerOffset;
@property (nonatomic) struct CGSize { double width; double height; } extendedSize;
@property (retain, nonatomic) UIView *wrappedView;

- (void)_updateLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)layoutSubviews;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
