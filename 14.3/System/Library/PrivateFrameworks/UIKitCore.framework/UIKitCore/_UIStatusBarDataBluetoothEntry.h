@class _UIStatusBarDataBatteryEntry;

@interface _UIStatusBarDataBluetoothEntry : _UIStatusBarDataEntry

@property (nonatomic) long long state;
@property (copy, nonatomic) _UIStatusBarDataBatteryEntry *batteryEntry;

+ (BOOL)supportsSecureCoding;

- (id)_ui_descriptionBuilder;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
