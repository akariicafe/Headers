@class NSString, HKQuantity;

@interface HKUserDomainConceptNamedQuantity : HKUserDomainConceptProperty {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HKQuantity *_lock_quantity;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) double value;
@property (readonly, copy, nonatomic) NSString *unitString;
@property (readonly, copy, nonatomic) HKQuantity *quantity;

+ (BOOL)supportsSecureCoding;
+ (id)nullPropertyWithType:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)valueDescription;
- (id)initWithName:(id)a0 quantity:(id)a1 type:(long long)a2;
- (id)initWithName:(id)a0 value:(double)a1 unitString:(id)a2 type:(long long)a3 version:(long long)a4 timestamp:(double)a5 deleted:(BOOL)a6;
- (id)initWithType:(long long)a0 version:(long long)a1 timestamp:(double)a2 deleted:(BOOL)a3;

@end
