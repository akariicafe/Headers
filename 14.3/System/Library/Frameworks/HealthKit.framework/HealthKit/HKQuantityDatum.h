@class HKQuantity, NSUUID, NSDateInterval, NSData;

@interface HKQuantityDatum : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ saveCompletion;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) HKQuantity *quantity;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSData *resumeContext;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 dateInterval:(id)a1 quantity:(id)a2 resumeContext:(id)a3;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
