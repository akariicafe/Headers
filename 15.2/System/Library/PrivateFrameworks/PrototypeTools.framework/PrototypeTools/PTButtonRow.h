@class NSString;

@interface PTButtonRow : PTSRow

@property (copy, nonatomic) NSString *outletKeyPath;

+ (BOOL)supportsSecureCoding;
+ (id)rowWithTitle:(id)a0 action:(id)a1;
+ (id)restoreDefaultSettingsButton;
+ (id)rowWithTitle:(id)a0 outletKeyPath:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)_defaultAction;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)outletKeyPath:(id)a0;

@end
