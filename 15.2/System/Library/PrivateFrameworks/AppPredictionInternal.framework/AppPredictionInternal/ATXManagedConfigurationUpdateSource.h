@class MCProfileConnection;
@protocol ATXUpdatePredictionsDelegate;

@interface ATXManagedConfigurationUpdateSource : NSObject <ATXUpdatePredictionsSource> {
    id _restrictionChangedNotificationToken;
}

@property (weak, nonatomic) id<ATXUpdatePredictionsDelegate> delegate;
@property (retain, nonatomic) MCProfileConnection *profileConnection;

- (void)handleProfileChangedNotification;
- (void)_registerForRestrictionChangedNotifications;
- (void).cxx_destruct;
- (id)init;
- (id)initWithProfileConnection:(id)a0;

@end
