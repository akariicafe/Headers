@protocol NSObject;

@interface SGCuratedChangeNotificationsCalendarListener : SGCuratedChangeNotificationsBaseListener {
    id<NSObject> _notificationCenterToken;
}

- (void)startListening;
- (void)stopListening;
- (void).cxx_destruct;

@end
