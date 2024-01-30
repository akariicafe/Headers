@interface PPContactScorer : NSObject

+ (id)_scoreAndSortContacts:(id)a0 rankMap:(id)a1;
+ (id)scoredContactsWithContacts:(id)a0;
+ (id)_contactRankMapWithRankedIdentifiers:(id)a0;
+ (id)mostRelevantContactsWithName:(id)a0 store:(id)a1;
+ (id)_scoredLabeledValues:(id)a0;
+ (id)mostRelevantContactsWithStore:(id)a0 shouldContinueBlock:(id /* block */)a1;
+ (id)_contactsWithIdentifiers:(id)a0 store:(id)a1;
+ (void)scoreContactNameRecords:(id)a0;
+ (id)mostRelevantContactsWithStore:(id)a0;
+ (double)_scoreWithInitialScore:(double)a0 identifier:(id)a1 rankMap:(id)a2;

@end
