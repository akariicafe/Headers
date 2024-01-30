@class SCLContact;

@interface SCLInterruptEvent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long urgency;
@property (readonly, nonatomic) SCLContact *sender;
@property (readonly, nonatomic) BOOL shouldAlwaysInterrupt;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldAlwaysInterrupt;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithEvent:(id)a0;
- (id)_initWithType:(unsigned long long)a0 urgency:(unsigned long long)a1 sender:(id)a2;

@end
