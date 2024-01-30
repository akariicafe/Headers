@class NSArray, MUBusinessHoursConfiguration;

@interface MUPlaceHoursSectionViewConfiguration : NSObject

@property (retain, nonatomic) MUBusinessHoursConfiguration *placeHours;
@property (retain, nonatomic) NSArray *serviceHoursList;
@property (nonatomic) unsigned long long numberOfInlineServiceHours;

- (void).cxx_destruct;

@end
