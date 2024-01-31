@interface CoreAudioKit.AUDistortionView : UIView <UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ distortionSectionViewCount;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ parameterDataSource;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ delaySectionCellRegistration;
    void /* unknown type, empty encoding */ ringModSectionCellRegistration;
    void /* unknown type, empty encoding */ decimationSectionCellRegistration;
    void /* unknown type, empty encoding */ overdriveSectionCellRegistration;
    void /* unknown type, empty encoding */ globalSectionCellRegistration;
    void /* unknown type, empty encoding */ auAudioUnit;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
