@interface EAPostAlert : NSObject

+ (id)CopyLocalizedString:(id)a0;
+ (void)EANotificationPostAccessoryNotification:(struct __CFString { } *)a0 forMsg:(struct __CFString { } *)a1 forDefaultButton:(struct __CFString { } *)a2 withAlternateButton:(struct __CFString { } *)a3 forNotification:(struct __CFUserNotification **)a4 withCallback:(void /* function */ *)a5 andTimeout:(double)a6;
+ (void)EATearDownAccessoryNotification:(struct __CFUserNotification **)a0;

@end
