@interface BCUIBatteryView : _UIStaticBatteryView {
    BOOL _lowBattery;
}

@property (nonatomic, getter=isLowBattery) BOOL lowBattery;

- (id)initWithSizeCategory:(long long)a0;
- (id)init;

@end
