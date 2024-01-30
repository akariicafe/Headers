@class UIImage;

@interface TSKCenterTilingButton : UIButton {
    UIImage *mLeftCapImage_Normal;
    UIImage *mLeftCapImage_Disabled;
    UIImage *mLeftCapImage_Active;
    UIImage *mLeftCapImage_Selected;
    UIImage *mLeftCapImage_ActiveSelected;
    UIImage *mRightCapImage_Normal;
    UIImage *mRightCapImage_Disabled;
    UIImage *mRightCapImage_Active;
    UIImage *mRightCapImage_Selected;
    UIImage *mRightCapImage_ActiveSelected;
    UIImage *mCenterTileImage_Normal;
    UIImage *mCenterTileImage_Disabled;
    UIImage *mCenterTileImage_Active;
    UIImage *mCenterTileImage_Selected;
    UIImage *mCenterTileImage_ActiveSelected;
    UIImage *mLeftCenterTileImage_Normal;
    UIImage *mLeftCenterTileImage_Disabled;
    UIImage *mLeftCenterTileImage_Active;
    UIImage *mLeftCenterTileImage_Selected;
    UIImage *mLeftCenterTileImage_ActiveSelected;
    UIImage *mRightCenterTileImage_Normal;
    UIImage *mRightCenterTileImage_Disabled;
    UIImage *mRightCenterTileImage_Active;
    UIImage *mRightCenterTileImage_Selected;
    UIImage *mRightCenterTileImage_ActiveSelected;
    int mTilingType;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)p_resetBackgroundImageForState:(unsigned long long)a0;
- (id)centerTileImageForState:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTilingType:(int)a1;
- (id)leftCapImageForState:(unsigned long long)a0;
- (id)leftCenterTileImageForState:(unsigned long long)a0;
- (void)p_tileButtedToCapLtoR:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)p_tileButtedToCapRtoL:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)p_tileHorizCenterOutwardwithLeft:(id)a0 andRight:(id)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)p_tileSimple:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)rightCapImageForState:(unsigned long long)a0;
- (id)rightCenterTileImageForState:(unsigned long long)a0;
- (void)setCenterTileImage:(id)a0 forState:(unsigned long long)a1;
- (void)setLeftCapImage:(id)a0 forState:(unsigned long long)a1;
- (void)setLeftCenterTileImage:(id)a0 forState:(unsigned long long)a1;
- (void)setRightCapImage:(id)a0 forState:(unsigned long long)a1;
- (void)setRightCenterTileImage:(id)a0 forState:(unsigned long long)a1;

@end
