@class PXUpdater, UIImage, PXPhotosGridAddButtonViewUserData, UIButton;

@interface PXPhotosGridAddButtonView : UIView <PXGReusableView> {
    UIButton *_button;
    PXUpdater *_updater;
}

@property (readonly, nonatomic) id /* block */ actionHandler;
@property (retain, nonatomic) UIImage *buttonImage;
@property (copy, nonatomic) PXPhotosGridAddButtonViewUserData *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;

- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateButtonImage;
- (void)_handleButton:(id)a0;
- (void)traitCollectionDidChange:(id)a0;

@end
