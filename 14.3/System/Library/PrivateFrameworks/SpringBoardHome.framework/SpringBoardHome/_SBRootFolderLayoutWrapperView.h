@class UIView;

@interface _SBRootFolderLayoutWrapperView : UIView

@property (nonatomic) double statusBarHeightAdjustment;
@property (nonatomic) double headerOffset;
@property (nonatomic) struct CGSize { double width; double height; } extendedSize;
@property (retain, nonatomic) UIView *wrappedView;

- (void)_updateLayout;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (void)layoutSubviews;
- (id)succinctDescriptionBuilder;

@end
