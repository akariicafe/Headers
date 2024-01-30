@class NSString;

@interface PTButtonRow : PTSRow

@property (copy, nonatomic) NSString *outletKeyPath;

+ (BOOL)supportsSecureCoding;
+ (id)restoreDefaultSettingsButton;
+ (id)rowWithTitle:(id)a0 action:(id)a1;
+ (id)rowWithTitle:(id)a0 outletKeyPath:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)_defaultAction;
- (id)outletKeyPath:(id)a0;

@end
