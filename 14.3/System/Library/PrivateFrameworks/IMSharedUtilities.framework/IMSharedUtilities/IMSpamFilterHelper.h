@interface IMSpamFilterHelper : NSObject

+ (id)internationalSpamFilterLearnMoreURL;
+ (BOOL)isFilterUnknownSendersEnabled;
+ (BOOL)isBlackholeEnabledForEligibleAccounts:(BOOL)a0;
+ (void)participantsAreiMessagable:(id)a0 completionBlock:(id /* block */)a1;
+ (BOOL)shouldShowSMSWarningForSender:(id)a0 forRecipient:(id)a1 withConversationHistory:(BOOL)a2;
+ (BOOL)receiverIsCandidateForHawking:(id)a0;
+ (BOOL)senderIsCandidateForSMSDowngrade:(id)a0;
+ (BOOL)isChineseSpamFilteringEnabled;
+ (BOOL)senderIsChinaHandle:(id)a0;
+ (BOOL)senderIsCandidateForBlackhole:(id)a0;
+ (id)mapID:(id)a0 usingKey:(id)a1;
+ (BOOL)senderIsKnownContact:(id)a0;
+ (BOOL)anyParticipantIsCandidateForBlackhole:(id)a0;
+ (BOOL)anyParticipantIsKnownContact:(id)a0;
+ (BOOL)receivingID:(id)a0 isCountryCode:(id)a1;
+ (BOOL)isKnownContact:(id)a0;
+ (id)_cnRecordForAliases:(id)a0;
+ (BOOL)shouldDowngradeToRecipient:(id)a0 fromSender:(id)a1 ifCapableOfSMS:(BOOL)a2 withConversationDowngradeState:(BOOL)a3 andConversationHistoryState:(BOOL)a4;
+ (BOOL)accountRegionIsCandidateForHawking:(id)a0;
+ (BOOL)shouldBlackholeMessageFromSender:(id)a0 toRecipient:(id)a1 ifRecipientIsCandidate:(BOOL)a2 givenHistory:(BOOL)a3 forEligibleAccounts:(BOOL)a4;
+ (BOOL)accountCountryIsCandidateForHawking:(id)a0;
+ (BOOL)shouldBlackholeGroupMessageFromSender:(id)a0 toRecipient:(id)a1 ifRecipientIsCandidate:(BOOL)a2 withOtherParticipants:(id)a3 givenHistory:(BOOL)a4 forEligibleAccounts:(BOOL)a5;
+ (BOOL)receiverIsCandidateForSMSFilter:(id)a0;
+ (BOOL)accountCountryIsCandidateForSMSFilter:(id)a0;
+ (id)sanitizeParticipants:(id)a0 excludingHandles:(id)a1;
+ (BOOL)isInternationalSpamFilteringEnabled;

@end
