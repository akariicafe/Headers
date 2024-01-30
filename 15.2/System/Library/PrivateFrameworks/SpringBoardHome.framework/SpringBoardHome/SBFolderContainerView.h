@class SBFolderView, UIView;

@interface SBFolderContainerView : SBFTouchPassThroughView {
    SBFolderContainerView *_childFolderContainerView;
}

@property (readonly, nonatomic) SBFolderView *folderView;
@property (retain, nonatomic) SBFolderContainerView *childFolderContainerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) double statusBarHeight;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForFolderView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFolderView:(id)a0;

@end
