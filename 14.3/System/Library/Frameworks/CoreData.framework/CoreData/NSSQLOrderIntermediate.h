@class NSArray;

@interface NSSQLOrderIntermediate : NSSQLIntermediate {
    NSArray *_sortDescriptors;
}

- (void)dealloc;
- (id)initWithSortDescriptors:(id)a0 inScope:(id)a1;
- (id)generateSQLStringInContext:(id)a0;
- (id)_generateSQLForOrderedManyToManyInverse:(id)a0 inContext:(id)a1;
- (id)_generateSQLForOrderedToManyInverse:(id)a0 inContext:(id)a1;

@end
