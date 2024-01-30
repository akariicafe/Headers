@class NSString;

@interface PTButtonRow : PTSRow

@property (copy, nonatomic) NSString *outletKeyPath;

+ (BOOL)supportsSecureCoding;
+ (id)rowWithTitle:(id)a0 outletKeyPath:(id)a1;
+ (id)rowWithTitle:(id)a0 action:(id)a1;
+ (id)restoreDefaultSettingsButton;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_defaultAction;
- (void)encodeWithCoder:(id)a0;
- (id)outletKeyPath:(id)a0;

@end
