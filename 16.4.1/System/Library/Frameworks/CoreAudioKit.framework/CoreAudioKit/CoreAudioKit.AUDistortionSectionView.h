@class UIColor;

@interface CoreAudioKit.AUDistortionSectionView : UICollectionViewCell {
    void /* unknown type, empty encoding */ visualizationView;
    void /* unknown type, empty encoding */ controlsView;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ audioUnit;
    void /* unknown type, empty encoding */ paramMap;
}

@property (nonatomic, retain) UIColor *tintColor;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)parameterChangedWithNotification:(id)a0;

@end
