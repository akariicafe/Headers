@class NSSortDescriptor, NSArray, _CDInteractionStore, NSPredicate;

@interface GDInteractionEnumeration : NSObject <NSFastEnumeration> {
    _CDInteractionStore *_store;
    NSArray *_batch;
    NSPredicate *_predicate;
    NSSortDescriptor *_sortDescriptor;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0 predicate:(id)a1 sortDescriptor:(id)a2;

@end
