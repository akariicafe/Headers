@class SBFolderView, UIView;

@interface SBFolderContainerView : SBFTouchPassThroughView {
    SBFolderContainerView *_childFolderContainerView;
}

@property (readonly, nonatomic) SBFolderView *folderView;
@property (retain, nonatomic) SBFolderContainerView *childFolderContainerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) double statusBarHeight;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForFolderView:(id)a0;
- (id)initWithFolderView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
