@class NSString, NSDictionary;

@interface PGGraphHolidayMetricEvent : NSObject <PLMetricEvent>

@property (retain, nonatomic) NSString *holidayName;
@property (nonatomic) unsigned long long numberOfCelebrations;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventIdentifier;
+ (id)celebratedHolidayMetricEventsWithGraphManager:(id)a0;

@end
