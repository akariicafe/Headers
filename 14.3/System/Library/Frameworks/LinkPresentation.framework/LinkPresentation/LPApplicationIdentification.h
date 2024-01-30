@interface LPApplicationIdentification : NSObject

+ (BOOL)isMessages;
+ (BOOL)isMessagesViewService;
+ (BOOL)isCNNMobile;
+ (BOOL)isMessagesOrMessagesViewService;
+ (BOOL)isMobileReminders;
+ (BOOL)isMobileNotes;
+ (BOOL)hasClipServicesEntitlement;

@end
