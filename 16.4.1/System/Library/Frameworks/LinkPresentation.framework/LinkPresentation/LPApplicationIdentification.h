@interface LPApplicationIdentification : NSObject

+ (BOOL)isMessagesOrMessagesViewService;
+ (BOOL)hasClipServicesEntitlement;
+ (BOOL)isCNNMobile;
+ (BOOL)isMessages;
+ (BOOL)isMessagesViewService;
+ (BOOL)isMobileNotes;
+ (BOOL)isMobileReminders;

@end
