@class HKClinicalGateway, NSUUID, NSString, HKClinicalBrand, NSDate;

@interface HKClinicalAccount : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic, getter=isUserEnabled) BOOL userEnabled;
@property (readonly, nonatomic) BOOL needsRelogin;
@property (readonly, nonatomic) BOOL needsScopeUpgrade;
@property (readonly, copy, nonatomic) NSDate *lastFetchDate;
@property (readonly, copy, nonatomic) NSDate *lastFullFetchDate;
@property (readonly, copy, nonatomic) HKClinicalGateway *gateway;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) HKClinicalBrand *brand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0 state:(long long)a1 userEnabled:(BOOL)a2 lastFetchDate:(id)a3 lastFullFetchDate:(id)a4 gateway:(id)a5;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
