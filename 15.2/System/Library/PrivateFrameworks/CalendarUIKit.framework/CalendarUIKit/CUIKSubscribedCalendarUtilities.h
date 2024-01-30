@interface CUIKSubscribedCalendarUtilities : NSObject

+ (BOOL)canHandleURL:(id)a0;
+ (void)unsubscribeFromCalendar:(id)a0 reportAsJunk:(BOOL)a1;
+ (void)unsubscribeFromCalendar:(id)a0;
+ (id)checkSubscriptionURL:(id)a0 missingSchemeBlock:(id /* block */)a1 unsupportedSchemeBlock:(id /* block */)a2;
+ (id)subscriptionURL:(id)a0 usingHTTPS:(BOOL)a1;
+ (id)daHostFromSubscriptionURL:(id)a0;
+ (void)_reportLocalSubscribedCalendarAsJunkWithoutRemoval:(id)a0;
+ (id)subscriptionURLForCalendar:(id)a0 inStore:(id)a1;

@end
