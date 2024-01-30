@class UIColor;

@interface CoreAudioKit.AUGenericViewParameterCellBase : UICollectionViewCell {
    void /* unknown type, empty encoding */ owner;
    void /* unknown type, empty encoding */ param;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ parameterName;
@property (nonatomic, weak) void /* unknown type, empty encoding */ valueLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ parameterWidthConstraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ valueStackWidthConstraint;
@property (nonatomic, retain) UIColor *tintColor;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
