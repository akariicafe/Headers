@protocol CALNCoreLocationProvider;

@interface CALNCalendarCoreLocationManager : NSObject

@property (readonly, nonatomic) id<CALNCoreLocationProvider> coreLocationProvider;
@property (readonly, nonatomic) BOOL allowsLocationAlerts;

- (void).cxx_destruct;
- (id)initWithCoreLocationProvider:(id)a0;
- (void)markAsHavingReceivedLocation;

@end
