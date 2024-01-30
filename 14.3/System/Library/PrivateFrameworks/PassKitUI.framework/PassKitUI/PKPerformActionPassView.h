@class PKPass, UIImageView, PKPassSnapshotter;

@interface PKPerformActionPassView : PKPerformActionBackdropView {
    PKPass *_pass;
    PKPassSnapshotter *_snapshotter;
    UIImageView *_passView;
}

- (void).cxx_destruct;
- (void)_createSubviews;
- (void)layoutSubviews;
- (void)shakeImage;
- (void)smallShakeImage;
- (void)_loadSnapshotView;
- (struct CGSize { double x0; double x1; })_passImageSize;
- (id)initWithPass:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
