@class DNDClientEventDetails;

@interface DNDClientEventBehavior : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) DNDClientEventDetails *eventDetails;
@property (readonly, nonatomic) unsigned long long interruptionSuppression;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEventDetails:(id)a0 interruptionSuppression:(unsigned long long)a1;

@end
