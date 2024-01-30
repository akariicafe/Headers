@class NSArray, NSString, NSSet, NSDate;

@interface _CDGenericInteractionRanker : NSObject <_CDInteractionRanking>

@property (retain) NSDate *referenceDate;
@property (retain) NSArray *seedContacts;
@property (retain) NSString *referenceLocationUUID;
@property (retain) NSSet *referenceKeywords;
@property (retain) NSSet *allowedIdentifiers;
@property (retain) NSSet *allowedPersonIds;
@property (retain) NSSet *allowedPersonIdType;
@property (retain) NSString *contactPrefix;
@property double timeHalfLife;
@property double timeOfDayHalfLife;
@property double timeOfWeekHalfLife;
@property double timeWeight;
@property double timeOfDayWeight;
@property double timeOfWeekWeight;
@property double c;
@property double sameWeekPeriodWeight;
@property double diffWeekPeriodWeight;
@property double outgoingWeight;
@property double socialWeight;
@property BOOL requireAllSeedContacts;
@property double locationWeight;
@property double keywordWeight;
@property double contactNameKeywordMatchWeight;
@property (nonatomic) unsigned long long rankAggregationMethod;

+ (BOOL)isDateInWeekend:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canRankContacts;
- (BOOL)contactIsAllowed:(id)a0;
- (double)rankContact:(id)a0;
- (id)rankInteraction:(id)a0;

@end
