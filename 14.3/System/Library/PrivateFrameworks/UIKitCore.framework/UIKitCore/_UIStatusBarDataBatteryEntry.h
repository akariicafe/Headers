@class NSString;

@interface _UIStatusBarDataBatteryEntry : _UIStatusBarDataEntry

@property (nonatomic) long long capacity;
@property (nonatomic) long long state;
@property (nonatomic) BOOL saverModeActive;
@property (nonatomic) BOOL prominentlyShowsDetailString;
@property (copy, nonatomic) NSString *detailString;

+ (BOOL)supportsSecureCoding;

- (id)_ui_descriptionBuilder;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
