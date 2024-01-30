@interface _CDInteractionAdvisorUtils : NSObject

+ (id)contactsForIdentifiers:(id)a0;
+ (id)adviceBasedOnInteractions:(id)a0 forContacts:(id)a1 andRanker:(id)a2 ignoringContacts:(id)a3 withLimit:(unsigned long long)a4 aggregateByIdentifier:(BOOL)a5 requireOneOutgoingInteraction:(BOOL)a6;
+ (void)adjustForConsumerSettings:(id)a0 modelSettings:(id)a1 andRanker:(id)a2;
+ (BOOL)adjustRanker:(id)a0 forModel:(unsigned long long)a1;
+ (BOOL)contact:(id)a0 mayRepresentTheSamePersonAsOneOf:(id)a1;
+ (id)contactsInInteraction:(id)a0;
+ (id)createTimePredicateForReferenceDate:(id)a0 recentLookBackDays:(int)a1 windowHours:(int)a2 lookBackWeeks:(int)a3 lookAheadWeeks:(int)a4;
+ (id)hashForAdviceWithContact:(id)a0 account:(id)a1 bundleId:(id)a2 mechanism:(long long)a3;
+ (id)inferConsumerIdentifierFromSettings:(id)a0;
+ (unsigned long long)modelTypeForConsumerIdentifier:(id)a0 modelSettings:(id)a1;
+ (id)nameFromModelID:(unsigned long long)a0;
+ (id)rankContacts:(id)a0 basedOnInteractions:(id)a1 andRanker:(id)a2;
+ (id)stringKeyForAdvice:(id)a0;
+ (id)unionSet:(id)a0 withSet:(id)a1;
+ (void)updateConsumerModelSettings:(id)a0;

@end
