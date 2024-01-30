@class UIView;

@interface _SBRootFolderLayoutWrapperView : UIView

@property (nonatomic) double statusBarHeightAdjustment;
@property (nonatomic) double headerOffset;
@property (nonatomic) struct CGSize { double width; double height; } extendedSize;
@property (retain, nonatomic) UIView *wrappedView;

- (void)layoutSubviews;
- (void)_updateLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
