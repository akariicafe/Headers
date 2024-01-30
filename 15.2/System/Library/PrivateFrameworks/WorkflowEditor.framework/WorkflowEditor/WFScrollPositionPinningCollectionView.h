@interface WFScrollPositionPinningCollectionView : UICollectionView

- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)unpin;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)wf_setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pinToSubview:(id)a0;

@end
