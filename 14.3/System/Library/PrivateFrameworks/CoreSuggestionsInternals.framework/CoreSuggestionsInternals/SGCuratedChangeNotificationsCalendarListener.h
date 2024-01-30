@protocol NSObject;

@interface SGCuratedChangeNotificationsCalendarListener : SGCuratedChangeNotificationsBaseListener {
    id<NSObject> _notificationCenterToken;
}

- (void)stopListening;
- (void).cxx_destruct;
- (void)startListening;

@end
