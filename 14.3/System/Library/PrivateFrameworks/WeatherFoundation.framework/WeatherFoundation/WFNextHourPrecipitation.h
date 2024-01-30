@class NSArray, WFNextHourPrecipitationDescription, NSDate;

@interface WFNextHourPrecipitation : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDate *readDate;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSArray *minutes;
@property (readonly, copy, nonatomic) NSArray *precipitationDescriptions;
@property (readonly, copy, nonatomic) NSArray *conditions;
@property (readonly, nonatomic) BOOL isRelevant;
@property (readonly, nonatomic) WFNextHourPrecipitationDescription *currentDescription;
@property (readonly, nonatomic) NSArray *activeMinutes;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReadDate:(id)a0 startDate:(id)a1 expirationDate:(id)a2 minutes:(id)a3 conditions:(id)a4 descriptions:(id)a5;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
