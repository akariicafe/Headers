@class NSString, NSDateInterval, NSDate;

@interface DNDStateModeAssertionMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSDate *userVisibleEndDate;
@property (readonly, copy, nonatomic) NSString *modeIdentifier;
@property (readonly, nonatomic) unsigned long long lifetimeType;
@property (readonly, copy, nonatomic) NSDateInterval *activeDateInterval;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0 modeIdentifier:(id)a1 lifetimeType:(unsigned long long)a2 activeDateInterval:(id)a3 userVisibleEndDate:(id)a4;

@end
