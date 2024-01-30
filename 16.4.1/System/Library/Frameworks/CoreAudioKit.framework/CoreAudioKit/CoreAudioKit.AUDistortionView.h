@interface CoreAudioKit.AUDistortionView : UIView <UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ distortionSectionViewCount;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ delaySectionCellRegistration;
    void /* unknown type, empty encoding */ ringModSectionCellRegistration;
    void /* unknown type, empty encoding */ decimationSectionCellRegistration;
    void /* unknown type, empty encoding */ overdriveSectionCellRegistration;
    void /* unknown type, empty encoding */ globalSectionCellRegistration;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ parameterDataSource;
@property (nonatomic, retain) void /* unknown type, empty encoding */ auAudioUnit;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (id)sectionNameFor:(long long)a0;
- (id)sectionColorFor:(long long)a0;
- (void)showSectionAt:(long long)a0;
- (void)removeFromSuperview;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setWithParameter:(unsigned int)a0 value:(float)a1;

@end
