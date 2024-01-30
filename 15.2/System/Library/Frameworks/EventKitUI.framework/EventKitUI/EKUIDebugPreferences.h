@class CalPreferences;

@interface EKUIDebugPreferences : NSObject {
    CalPreferences *_preferences;
}

@property (nonatomic) BOOL showInviteesAndMoreRegion;
@property (nonatomic) BOOL showReportAProblemNotificationButton;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;

@end
