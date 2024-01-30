@interface _CDInteractionAdvisorUtils : NSObject

+ (id)createTimePredicateForReferenceDate:(id)a0 recentLookBackDays:(int)a1 windowHours:(int)a2 lookBackWeeks:(int)a3 lookAheadWeeks:(int)a4;
+ (id)adviceBasedOnInteractions:(id)a0 forContacts:(id)a1 andRanker:(id)a2 ignoringContacts:(id)a3 withLimit:(unsigned long long)a4 aggregateByIdentifier:(BOOL)a5 requireOneOutgoingInteraction:(BOOL)a6;
+ (id)contactsForIdentifiers:(id)a0;
+ (BOOL)contact:(id)a0 mayRepresentTheSamePersonAsOneOf:(id)a1;
+ (id)contactsInInteraction:(id)a0;
+ (id)hashForAdviceWithContact:(id)a0 account:(id)a1 bundleId:(id)a2 mechanism:(long long)a3;
+ (BOOL)adjustRanker:(id)a0 forModel:(unsigned long long)a1;
+ (id)inferConsumerIdentifierFromSettings:(id)a0;
+ (id)nameFromModelID:(unsigned long long)a0;
+ (unsigned long long)modelTypeForConsumerIdentifier:(id)a0 modelSettings:(id)a1;
+ (id)stringKeyForAdvice:(id)a0;
+ (id)unionSet:(id)a0 withSet:(id)a1;
+ (id)rankContacts:(id)a0 basedOnInteractions:(id)a1 andRanker:(id)a2;
+ (void)updateConsumerModelSettings:(id)a0;
+ (void)adjustForConsumerSettings:(id)a0 modelSettings:(id)a1 andRanker:(id)a2;

@end
