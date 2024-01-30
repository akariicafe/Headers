@interface GDInteractionStoreShim : NSObject

+ (id)interactionHistoryEnumeratorFromStore:(id)a0 predicate:(id)a1 sortDescriptor:(id)a2;
+ (id)interactionFromCDInteraction:(id)a0;
+ (id)interactionHistoryEnumerator;
+ (id)interactionHistoryEnumeratorFromStore:(id)a0;
+ (id)interactionHistoryEnumeratorWithPredicate:(id)a0 sortDescriptor:(id)a1;
+ (id)interactionHistoryFromStore:(id)a0;

@end
