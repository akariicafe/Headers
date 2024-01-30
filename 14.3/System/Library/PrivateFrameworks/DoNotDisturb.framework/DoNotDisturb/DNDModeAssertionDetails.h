@class NSString, DNDModeAssertionLifetime, NSDate;

@interface DNDModeAssertionDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isUserRequested) BOOL userRequested;
@property (readonly, copy, nonatomic) NSDate *userVisibleEndDate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *modeIdentifier;
@property (readonly, copy, nonatomic) DNDModeAssertionLifetime *lifetime;

+ (id)detailsWithIdentifier:(id)a0 modeIdentifier:(id)a1 lifetime:(id)a2;
+ (id)userRequestedAssertionDetailsWithIdentifier:(id)a0 modeIdentifier:(id)a1 lifetime:(id)a2;

- (id)init;
- (id)_initWithDetails:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithIdentifier:(id)a0 modeIdentifier:(id)a1 lifetime:(id)a2 userVisibleEndDate:(id)a3;

@end
