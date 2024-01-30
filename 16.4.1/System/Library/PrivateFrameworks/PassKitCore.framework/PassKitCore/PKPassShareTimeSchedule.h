@class NSArray;

@interface PKPassShareTimeSchedule : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *hoursOfDay;
@property (retain, nonatomic) NSArray *daysOfWeek;
@property (retain, nonatomic) NSArray *daysOfMonth;
@property (nonatomic) unsigned long long interval;
@property (nonatomic) unsigned long long frequency;

+ (id)emptySchedule;

- (void)encodeWithCoder:(id)a0;
- (id)intersect:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToPassShareTimeSchedule:(id)a0;

@end
