@interface DASharedAccountProperties : NSObject

+ (id)DAAccountPrincipalPath;
+ (id)DAAccountSavePreflighted;
+ (id)leafAccountTypesToCheckForEquality;
+ (id)DAAccountIdentifiersToIgnoreForUniquenessCheck;
+ (id)leafAccountTypes;
+ (id)DAAccountDoNotSaveReason;
+ (id)parentAccountTypes;
+ (id)SubCalInsecureConnectionApproved;
+ (id)DACardDAVAccountDSID;
+ (id)CalDAVSubscribedCalendarsKey;
+ (id)SubCalFilterAlarmsKey;
+ (id)SubCalSubscriptionURLKey;
+ (id)SubCalTitleKey;

@end
