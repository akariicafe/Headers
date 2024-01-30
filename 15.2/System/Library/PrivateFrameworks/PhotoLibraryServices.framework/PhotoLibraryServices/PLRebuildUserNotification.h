@class NSString;

@interface PLRebuildUserNotification : NSObject

@property (readonly) NSString *message;

- (long long)showAlertAndWaitForResponse;
- (id)initWithMessage:(id)a0;
- (BOOL)_shouldShowUserNotification;
- (void)_snoozeForHours:(unsigned long long)a0;
- (void).cxx_destruct;

@end
