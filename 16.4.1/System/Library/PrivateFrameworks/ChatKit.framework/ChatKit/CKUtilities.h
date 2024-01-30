@interface CKUtilities : NSObject

+ (BOOL)isIpad;
+ (id)threadOriginatorForMessagePart:(id)a0;
+ (double)_daysSinceDate:(id)a0;
+ (id)threadIdentifierForMessagePart:(id)a0;
+ (double)_intervalSinceDate:(id)a0;
+ (unsigned long long)daysUntilJunkFilterDeletionForDate:(id)a0;
+ (unsigned long long)daysUntilRecentlyDeletedDeletionForDate:(id)a0;
+ (BOOL)deviceHasMultipleSubscriptions;
+ (id)deviceSpecificNameForKey:(id)a0;
+ (id)imDefaultsSharedInstance;
+ (id)imMessageForIMMessageItem:(id)a0;
+ (unsigned long long)indexOfChatItem:(id)a0 inChatItemsArray:(id)a1;
+ (BOOL)isMessagePromotionsNotificationDisabled;
+ (BOOL)isMessageTransactionsNotificationDisabled;
+ (BOOL)isMessageUnknownSenderNotificationDisabled;
+ (id)localizedStewieString:(id)a0;
+ (unsigned long long)messageJunkStatus;
+ (id)nsUserDefaultsStandardUserDefaults;
+ (void)onboardRecentlyDeletedIfNeeded:(id)a0 actionHandler:(id /* block */)a1;
+ (id)quickSaveConfirmationAlertForMediaObjects:(id)a0 momentShareURL:(id)a1 popoverSource:(id)a2 metricsSource:(id)a3 cancelHandler:(id /* block */)a4 preSaveHandler:(id /* block */)a5 postSaveHandler:(id /* block */)a6;
+ (id)quickSaveConfirmationAlertForMediaObjects:(id)a0 momentShareURL:(id)a1 popoverSource:(id)a2 metricsSource:(id)a3 cancelHandler:(id /* block */)a4 preSaveHandler:(id /* block */)a5 postSaveHandler:(id /* block */)a6 postAnyActionHandler:(id /* block */)a7;
+ (id)quickSaveConfirmationAlertWithPhotoCount:(unsigned long long)a0 videoCount:(unsigned long long)a1 otherCount:(unsigned long long)a2 alreadySavedCount:(unsigned long long)a3 popoverSource:(id)a4 cancelHandler:(id /* block */)a5 saveHandler:(id /* block */)a6 navigationHandler:(id /* block */)a7;
+ (BOOL)userDefaultBoolForKey:(id)a0;

@end
