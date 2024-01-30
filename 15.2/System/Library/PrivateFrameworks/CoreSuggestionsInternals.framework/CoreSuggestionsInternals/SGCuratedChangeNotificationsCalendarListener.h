@protocol NSObject;

@interface SGCuratedChangeNotificationsCalendarListener : SGCuratedChangeNotificationsBaseListener {
    id<NSObject> _notificationCenterToken;
}

- (void)stopListening;
- (void)startListening;
- (void).cxx_destruct;

@end
