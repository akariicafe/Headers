@class NSString;

@interface DNDLifetimeDetails : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *metadata;

+ (id)lifetimeDetailsUntilEvening;
+ (id)lifetimeDetailsForEvent:(id)a0 relativeToDate:(id)a1;
+ (id)lifetimeDetailsUntilMorning;
+ (id)lifetimeDetailsForOneHour;
+ (id)lifetimeDetailsForPlaceInference:(id)a0;

- (id)initWithIdentifier:(id)a0 name:(id)a1 metadata:(id)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
