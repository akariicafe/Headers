@class NSString, DNDContactHandle;

@interface DNDClientEventDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL notifyAnyway;
@property (readonly, nonatomic) unsigned long long behavior;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long urgency;
@property (readonly, copy, nonatomic) DNDContactHandle *sender;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) BOOL shouldAlwaysInterrupt;

- (void)encodeWithCoder:(id)a0;
- (id)_initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 type:(unsigned long long)a2 urgency:(unsigned long long)a3 sender:(id)a4 threadIdentifier:(id)a5 notifyAnyway:(BOOL)a6 behavior:(unsigned long long)a7;
- (BOOL)shouldAlwaysInterrupt;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_descriptionForRedacted:(BOOL)a0;
- (id)_initWithDetails:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)redactedDescription;
- (unsigned long long)hash;

@end
