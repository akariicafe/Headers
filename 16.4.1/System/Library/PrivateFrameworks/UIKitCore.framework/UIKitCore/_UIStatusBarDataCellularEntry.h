@class NSString;

@interface _UIStatusBarDataCellularEntry : _UIStatusBarDataNetworkEntry

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSString *crossfadeString;
@property (copy, nonatomic) NSString *badgeString;
@property (nonatomic) BOOL wifiCallingEnabled;
@property (nonatomic) BOOL callForwardingEnabled;
@property (nonatomic) BOOL showsSOSWhenDisabled;
@property (nonatomic) BOOL sosAvailable;
@property (nonatomic) BOOL isBootstrapCellular;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
