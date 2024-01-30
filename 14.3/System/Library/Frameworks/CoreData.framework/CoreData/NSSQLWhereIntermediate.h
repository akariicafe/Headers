@class NSPredicate;

@interface NSSQLWhereIntermediate : NSSQLIntermediate {
    NSPredicate *_predicate;
}

- (id)predicate;
- (id)initWithPredicate:(id)a0 inScope:(id)a1;

@end
