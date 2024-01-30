@class NSString;

@interface PLRebuildUserNotification : NSObject

@property (readonly) NSString *message;

- (id)initWithMessage:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldShowUserNotification;
- (void)_snoozeForHours:(unsigned long long)a0;
- (long long)showAlertAndWaitForResponse;

@end
