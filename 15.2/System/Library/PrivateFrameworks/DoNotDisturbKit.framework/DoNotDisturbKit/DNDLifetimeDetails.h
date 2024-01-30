@class NSString;

@interface DNDLifetimeDetails : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *metadata;

+ (id)lifetimeDetailsForPlaceInference:(id)a0;
+ (id)lifetimeDetailsUntilMorning;
+ (id)lifetimeDetailsUntilEvening;
+ (id)lifetimeDetailsForOneHour;
+ (id)lifetimeDetailsForEvent:(id)a0 relativeToDate:(id)a1;

- (id)initWithIdentifier:(id)a0 name:(id)a1 metadata:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
