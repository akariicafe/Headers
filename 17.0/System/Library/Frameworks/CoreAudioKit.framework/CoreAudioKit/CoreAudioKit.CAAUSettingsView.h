@interface CoreAudioKit.CAAUSettingsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ bandSelector;
    void /* unknown type, empty encoding */ au;
    void /* unknown type, empty encoding */ genericView;
    void /* unknown type, empty encoding */ selectedBand;
}

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
