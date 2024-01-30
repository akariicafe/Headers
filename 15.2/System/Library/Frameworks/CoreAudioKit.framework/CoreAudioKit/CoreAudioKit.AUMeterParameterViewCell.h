@class UIColor;

@interface CoreAudioKit.AUMeterParameterViewCell : CoreAudioKit.AUGenericViewTableViewCellBase

@property (nonatomic, weak) void /* unknown type, empty encoding */ meter;
@property (nonatomic, weak) void /* unknown type, empty encoding */ unitLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ minLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ maxLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ minWidthConstraint;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)tintColorDidChange;

@end
