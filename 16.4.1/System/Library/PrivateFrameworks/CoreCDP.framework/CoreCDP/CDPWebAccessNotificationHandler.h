@interface CDPWebAccessNotificationHandler : NSObject {
    BOOL _isObservingWebAccessStatus;
}

+ (id)sharedInstance;

- (void)startObservingWebAccessStateChangeNotification;
- (void)dealloc;
- (void)_stopObservingWebAccessStateChangeNotification;

@end
