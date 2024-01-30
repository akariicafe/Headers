@class NSString, DNDClientEventSource;

@interface DNDClientEventDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) DNDClientEventSource *source;
@property (readonly, nonatomic) BOOL shouldAlwaysInterrupt;

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
- (id)_initWithIdentifier:(id)a0 source:(id)a1 shouldAlwaysInterrupt:(BOOL)a2;

@end
