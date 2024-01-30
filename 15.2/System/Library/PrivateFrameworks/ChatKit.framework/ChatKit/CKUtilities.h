@interface CKUtilities : NSObject

+ (id)quickSaveConfirmationAlertForMediaObjects:(id)a0 momentShareURL:(id)a1 popoverSource:(id)a2 metricsSource:(id)a3 cancelHandler:(id /* block */)a4 preSaveHandler:(id /* block */)a5 postSaveHandler:(id /* block */)a6;
+ (id)threadIdentifierForMessagePart:(id)a0;
+ (id)threadOriginatorForMessagePart:(id)a0;
+ (id)quickSaveConfirmationAlertWithPhotoCount:(unsigned long long)a0 videoCount:(unsigned long long)a1 otherCount:(unsigned long long)a2 alreadySavedCount:(unsigned long long)a3 popoverSource:(id)a4 cancelHandler:(id /* block */)a5 saveHandler:(id /* block */)a6 navigationHandler:(id /* block */)a7;
+ (BOOL)isIpad;
+ (id)imMessageForIMMessageItem:(id)a0;
+ (BOOL)isMessageUnknownSenderNotificationDisabled;
+ (BOOL)isMessageTransactionsNotificationDisabled;
+ (id)imDefaultsSharedInstance;
+ (BOOL)isMessagePromotionsNotificationDisabled;
+ (id)nsUserDefaultsStandardUserDefaults;
+ (BOOL)deviceHasMultipleSubscriptions;
+ (BOOL)userDefaultBoolForKey:(id)a0;
+ (id)deviceSpecificNameForKey:(id)a0;
+ (unsigned long long)messageJunkStatus;
+ (unsigned long long)indexOfChatItem:(id)a0 inChatItemsArray:(id)a1;

@end
