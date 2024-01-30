@class NSString, PKLinkedApplication, UIImage, UILabel;

@interface PKMerchantTokenIconView : UIImageView <PKLinkedApplicationObserver> {
    PKLinkedApplication *_linkedApplication;
    UILabel *_monogramLabel;
    UIImage *_image;
    double _cornerRadius;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)linkedApplicationDidChangeState:(id)a0;
- (void)_setUpViews;
- (void)updateWithImage:(id)a0 cornerRadius:(double)a1;
- (void)updateWithAdamId:(id)a0 monogramText:(id)a1 cornerRadius:(double)a2;
- (void)_setUpSelf;
- (void)_updateIconImage;
- (void)_updateLinkedApplicationWithAdamId:(id)a0;
- (void)_updateMonogramLabelWithText:(id)a0;
- (void)_setUpMonogramLabel;

@end
