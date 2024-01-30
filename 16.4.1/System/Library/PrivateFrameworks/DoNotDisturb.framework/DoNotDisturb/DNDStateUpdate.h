@class DNDState;

@interface DNDStateUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) DNDState *previousState;
@property (readonly, copy, nonatomic) DNDState *state;
@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) long long options;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPreviousState:(id)a0 state:(id)a1 reason:(unsigned long long)a2 source:(long long)a3 options:(long long)a4;

@end
