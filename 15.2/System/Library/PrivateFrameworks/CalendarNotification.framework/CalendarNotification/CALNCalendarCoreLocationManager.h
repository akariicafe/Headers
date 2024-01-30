@protocol CALNCoreLocationProvider;

@interface CALNCalendarCoreLocationManager : NSObject

@property (readonly, nonatomic) id<CALNCoreLocationProvider> coreLocationProvider;
@property (readonly, nonatomic) BOOL allowsLocationAlerts;

- (id)initWithCoreLocationProvider:(id)a0;
- (void).cxx_destruct;
- (void)markAsHavingReceivedLocation;

@end
