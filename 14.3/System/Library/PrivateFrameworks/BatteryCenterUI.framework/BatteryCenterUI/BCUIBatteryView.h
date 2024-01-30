@interface BCUIBatteryView : _UIStaticBatteryView {
    BOOL _lowBattery;
}

@property (nonatomic, getter=isLowBattery) BOOL lowBattery;

- (id)init;
- (id)initWithSizeCategory:(long long)a0;

@end
