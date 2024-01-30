@class NSString, INObject, CLPlacemark, NSNumber;

@interface EKUICreateEventIntent : INIntent

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) INObject *startDate;
@property (copy, nonatomic) INObject *endDate;
@property (copy, nonatomic) NSString *locationName;
@property (copy, nonatomic) CLPlacemark *geolocation;
@property (copy, nonatomic) NSString *locationAddress;
@property (copy, nonatomic) NSNumber *allDay;

@end
