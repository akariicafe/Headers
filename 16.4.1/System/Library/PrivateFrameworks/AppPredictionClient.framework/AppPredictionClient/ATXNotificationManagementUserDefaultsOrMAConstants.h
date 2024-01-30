@class ATXNotificationManagementMAConstants, NSUserDefaults;

@interface ATXNotificationManagementUserDefaultsOrMAConstants : NSObject {
    ATXNotificationManagementMAConstants *_constants;
    NSUserDefaults *_defaults;
}

- (id)init;
- (void).cxx_destruct;
- (double)doubleForKey:(id)a0 defaultReturnValue:(double)a1;
- (id)numberForKey:(id)a0 defaultReturnValue:(id)a1;

@end
