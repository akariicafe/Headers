@class NSString;

@interface RTNavigationManagerRouteSummaryNotification : RTNotification

@property (nonatomic) double originLatitude;
@property (nonatomic) double originLongitude;
@property (retain, nonatomic) NSString *destinationName;
@property (nonatomic) double destinationLatitude;
@property (nonatomic) double destinationLongitude;

- (void).cxx_destruct;
- (id)initWithRouteSummary:(id)a0;

@end
