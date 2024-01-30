@interface IMSpamFilterHelper : NSObject

+ (BOOL)receiverIsCandidateForHawking:(id)a0;
+ (id)internationalSpamFilterLearnMoreURL;
+ (BOOL)isBlackholeEnabledForEligibleAccounts:(BOOL)a0;
+ (BOOL)isFilterUnknownSendersEnabled;
+ (BOOL)isInternationalSpamFilteringEnabled;
+ (void)participantsAreiMessagable:(id)a0 completionBlock:(id /* block */)a1;
+ (BOOL)shouldShowSMSWarningForSender:(id)a0 forRecipient:(id)a1 withConversationHistory:(BOOL)a2;
+ (BOOL)isKnownContact:(id)a0;
+ (id)mapID:(id)a0 usingKey:(id)a1;
+ (id)_cnRecordForAliases:(id)a0;
+ (BOOL)accountCountryIsCandidateForHawking:(id)a0;
+ (BOOL)accountCountryIsCandidateForSMSFilter:(id)a0;
+ (BOOL)accountCountryIsCandidateForiMessageJunk:(id)a0;
+ (BOOL)accountRegionIsCandidateForHawking:(id)a0;
+ (id)accountRegionsEligibleForJunkFiltering;
+ (BOOL)anyParticipantIsCandidateForBlackhole:(id)a0;
+ (BOOL)anyParticipantIsKnownContact:(id)a0;
+ (id)defaultAccountRegionsEligibleForJunkFiltering;
+ (id)defaultTelephonyCountryCodesEligibleForJunkFiltering;
+ (BOOL)isChineseSpamFilteringEnabled;
+ (BOOL)isiMessageJunkFilterEnabled;
+ (BOOL)receiverIsCandidateForAppleSMSFilterSubClassification:(id)a0;
+ (BOOL)receiverIsCandidateForDefaultAppleSMSFilter:(id)a0;
+ (BOOL)receiverIsCandidateForSMSFilter:(id)a0;
+ (BOOL)receiverIsCandidateForiMessageJunk:(id)a0;
+ (BOOL)receiverIsEnabledForSMSFilter:(id)a0;
+ (BOOL)receivingID:(id)a0 isCountryCode:(id)a1;
+ (id)sanitizeParticipants:(id)a0 excludingHandles:(id)a1;
+ (BOOL)senderIsCandidateForBlackhole:(id)a0;
+ (BOOL)senderIsCandidateForSMSDowngrade:(id)a0;
+ (BOOL)senderIsChinaHandle:(id)a0;
+ (BOOL)senderIsKnownContact:(id)a0;
+ (BOOL)shouldBlackholeGroupMessageFromSender:(id)a0 toRecipient:(id)a1 ifRecipientIsCandidate:(BOOL)a2 withOtherParticipants:(id)a3 givenHistory:(BOOL)a4 forEligibleAccounts:(BOOL)a5;
+ (BOOL)shouldBlackholeMessageFromSender:(id)a0 toRecipient:(id)a1 ifRecipientIsCandidate:(BOOL)a2 givenHistory:(BOOL)a3 forEligibleAccounts:(BOOL)a4;
+ (BOOL)shouldDowngradeToRecipient:(id)a0 fromSender:(id)a1 ifCapableOfSMS:(BOOL)a2 withConversationDowngradeState:(BOOL)a3 andConversationHistoryState:(BOOL)a4;
+ (id)telephonyCountryCodesEligibleForJunkFiltering;

@end
