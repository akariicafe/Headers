@class NSString, _UIBatteryView, UIImageView, UILabel;

@interface WFHotspotDetailsView : UIStackView

@property (retain, nonatomic) _UIBatteryView *batteryView;
@property (retain, nonatomic) UIImageView *signalImageView;
@property (retain, nonatomic) UILabel *networkTypeLabel;
@property (nonatomic) unsigned long long batteryCharge;
@property (copy, nonatomic) NSString *cellularProtocolString;
@property (nonatomic) unsigned long long signalBars;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateSignalBars;
- (void)updateCellularProtocolLabel;
- (id)attributedStringFromCellularProtocol:(id)a0;

@end
