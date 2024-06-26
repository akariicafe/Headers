@class NSString, NSArray, EFMutableInt64Set;

@interface MFMessageCriterion : NSObject <EDSearchableCriterion, NSCopying> {
    NSString *_criterionIdentifier;
    long long _type;
    NSString *_uniqueId;
    NSString *_expression;
    NSArray *_criteria;
    int _dateUnitType;
    unsigned char _allCriteriaMustBeSatisfied : 1;
    unsigned char _dateIsRelative : 1;
    NSArray *_requiredHeaders;
}

@property (readonly, nonatomic, getter=isFullTextSearchableCriterion) BOOL fullTextSearchableCriterion;
@property (readonly, nonatomic) NSString *spotlightQueryString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long criterionType;
@property (retain, nonatomic) NSString *criterionIdentifier;
@property (nonatomic) int qualifier;
@property (copy, nonatomic) NSString *expression;
@property (copy, nonatomic) NSArray *expressionLanguages;
@property (retain, nonatomic) EFMutableInt64Set *libraryIdentifiers;
@property (nonatomic) BOOL preferFullTextSearch;
@property (nonatomic) BOOL useFlaggedForUnreadCount;
@property (nonatomic) unsigned char includeRelatedMessages : 1;
@property (nonatomic) BOOL expressionIsSanitized;
@property (nonatomic) BOOL includeRemoteBodyContent;
@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *criteria;

+ (id)_todayDateComponents;
+ (id)orCompoundCriterionWithCriteria:(id)a0;
+ (id)unreadMessageCriterion;
+ (long long)criterionTypeForString:(id)a0;
+ (id)andCompoundCriterionWithCriteria:(id)a0;
+ (id)messageIsDeletedCriterion:(BOOL)a0;
+ (id)messageIsServerSearchResultCriterion:(BOOL)a0;
+ (id)criterionForMailboxURL:(id)a0;
+ (id)criterionForNotDeletedConversationID:(long long)a0;
+ (id)criterionForMailboxPredictionMessageQuery:(unsigned long long)a0 variable:(id)a1;
+ (id)criteriaFromDefaultsArray:(id)a0 removingRecognizedKeys:(BOOL)a1;
+ (id)stringForCriterionType:(long long)a0;
+ (id)criterionForMailbox:(id)a0;
+ (id)notCriterionWithCriterion:(id)a0;
+ (id)criterionForConversationID:(long long)a0;
+ (id)_criterionForDateReceivedBetweenDateComponents:(id)a0 endDateComponents:(id)a1;
+ (id)_criterionForDateReceivedBetween:(id)a0 endDate:(id)a1;
+ (id)criterionForDateReceivedNewerThanDate:(id)a0;
+ (id)criterionForDateReceivedOlderThanDate:(id)a0;
+ (id)expressionForDate:(id)a0;
+ (id)criteriaFromDefaultsArray:(id)a0;
+ (id)defaultsArrayFromCriteria:(id)a0;
+ (id)criterionFromDefaultsDictionary:(id)a0;
+ (id)defaultsDictionaryFromCriterion:(id)a0;
+ (id)criterionForAccount:(id)a0;
+ (id)criterionExcludingMailboxes:(id)a0;
+ (id)messageIsJournaledCriterion:(BOOL)a0;
+ (id)criterionForLibraryID:(id)a0;
+ (id)criterionForDocumentID:(id)a0;
+ (id)VIPSenderMessageCriterion;
+ (id)threadNotifyMessageCriterion;
+ (id)threadMuteMessageCriterion;
+ (id)flaggedMessageCriterion;
+ (id)criterionForFlagColor:(unsigned long long)a0;
+ (id)readMessageCriterion;
+ (id)includesMeCriterion;
+ (id)toMeCriterion;
+ (id)ccMeCriterion;
+ (id)hasAttachmentsCriterion;
+ (id)todayMessageCriterion;
+ (id)yesterdayMessageCriterion;
+ (id)lastWeekMessageCriterion;
+ (id)matchEverythingCriterion;
+ (id)matchNothingCriterion;

- (id)initWithType:(long long)a0 qualifier:(int)a1 expression:(id)a2;
- (id)fixOnce;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)dateUnits;
- (id)simplifiedCriterion;
- (id)_criterionForSQL;
- (id)_evaluateFTSCriterionWithIndex:(id)a0 mailboxIDs:(id)a1;
- (BOOL)allCriteriaMustBeSatisfied;
- (id)_resolveWithIndex:(id)a0 mailboxIDs:(id)a1;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)a0;
- (id)_collapsedMessageNumberCriterion:(id)a0 allMustBeSatisfied:(BOOL)a1 collapsedIndexes:(id *)a2;
- (BOOL)hasLibraryIDCriterion;
- (id)SQLExpressionWithContext:(id)a0 depth:(unsigned int)a1;
- (unsigned int)bestBaseTable;
- (void)_addCriteriaSatisfyingPredicate:(void /* function */ *)a0 toCollector:(id)a1;
- (BOOL)includesCriterionSatisfyingPredicate:(void /* function */ *)a0 restrictive:(BOOL)a1;
- (id)criterionByApplyingTransform:(id /* block */)a0;
- (id)criteriaSatisfyingPredicate:(void /* function */ *)a0;
- (id)criterionForSQL;
- (id)SQLExpressionWithTables:(unsigned int *)a0 baseTable:(unsigned int)a1 protectedDataAvailable:(BOOL)a2 searchableIndex:(id)a3 mailboxIDs:(id)a4 propertyMapper:(id)a5;
- (id)extractedDateCriterion;
- (id)extractedUnreadCriterion;
- (BOOL)dateIsRelative;
- (void)setDateUnits:(int)a0;
- (void)setDateIsRelative:(BOOL)a0;
- (id)_SQLExpressionForMailboxCriterion;
- (BOOL)hasNonFullTextSearchableCriterion;
- (id)_spotlightQueryStringIsAllSpotlightQuery:(BOOL *)a0;
- (id)_queryWithAttributes:(id)a0 matchingValue:(id)a1 qualifier:(int)a2;
- (id)_queryWithAttributes:(id)a0 matchingValue:(id)a1;
- (id)_comparisonOperationMatchingValue:(id)a0 qualifier:(int)a1;
- (id)criteriaForSpotlightCriteria:(id)a0;
- (id)_attributesForHeaderCriterion;
- (id)_wordQueryWithAttributes:(id)a0 languages:(id)a1 expression:(id)a2;
- (id)unreadCountCriterion;
- (id)initWithDictionary:(id)a0 andRemoveRecognizedKeysIfMutable:(BOOL)a1;
- (id)initWithCriterion:(id)a0 expression:(id)a1;
- (int)messageRuleQualifierForString:(id)a0;
- (id)descriptionWithDepth:(unsigned int)a0;
- (id)_qualifierString;
- (id)stringForMessageRuleQualifier:(int)a0;
- (BOOL)doesMessageSatisfyCriterion:(id)a0;
- (id)_headersRequiredForEvaluation;
- (BOOL)_evaluatePartOfStructure:(id)a0;
- (BOOL)_evaluateCompoundCriterion:(id)a0;
- (BOOL)_evaluateFlagCriterion:(id)a0;
- (BOOL)_evaluateAddressBookCriterion:(id)a0;
- (BOOL)_evaluateHeaderCriterion:(id)a0;
- (BOOL)_evaluateSenderHeaderCriterion:(id)a0;
- (BOOL)_evaluateAccountCriterion:(id)a0;
- (BOOL)_evaluateDateCriterion:(id)a0;
- (BOOL)_evaluateAddressHistoryCriterion:(id)a0;
- (BOOL)_evaluateFullNameCriterion:(id)a0;
- (BOOL)_evaluateIsDigitallySignedCriterion:(id)a0;
- (BOOL)_evaluateIsEncryptedCriterion:(id)a0;
- (BOOL)_evaluatePriorityIsNormalCriterion:(id)a0;
- (BOOL)_evaluatePriorityIsHighCriterion:(id)a0;
- (BOOL)_evaluatePriorityIsLowCriterion:(id)a0;
- (BOOL)_evaluateAttachmentCriterion:(id)a0;
- (BOOL)_evaluateConversationIDCriterion:(id)a0;
- (BOOL)_evaluateMailboxCriterion:(id)a0;
- (id)simplifyOnce;
- (id)dateFromExpression;
- (BOOL)isVIPCriterion;
- (id)daSearchPredicate;
- (id)daBasicSearchString;

@end
