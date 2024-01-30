@class NSArray, NSString, NSTimeZone;

@interface MUBusinessHoursConfiguration : NSObject

@property (readonly, nonatomic) NSTimeZone *placeTimeZone;
@property (readonly, nonatomic) NSArray *businessHours;
@property (copy, nonatomic) NSString *hoursName;
@property (nonatomic) BOOL isServiceHours;

- (void).cxx_destruct;
- (id)initWithBusinessHours:(id)a0 timeZone:(id)a1;

@end
