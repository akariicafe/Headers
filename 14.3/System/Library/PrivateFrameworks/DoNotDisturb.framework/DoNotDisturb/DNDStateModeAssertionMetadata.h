@class NSString, NSDateInterval, NSDate;

@interface DNDStateModeAssertionMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSDate *userVisibleEndDate;
@property (readonly, copy, nonatomic) NSString *modeIdentifier;
@property (readonly, nonatomic) unsigned long long lifetimeType;
@property (readonly, copy, nonatomic) NSDateInterval *activeDateInterval;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithClientIdentifier:(id)a0 modeIdentifier:(id)a1 lifetimeType:(unsigned long long)a2 activeDateInterval:(id)a3 userVisibleEndDate:(id)a4;

@end
