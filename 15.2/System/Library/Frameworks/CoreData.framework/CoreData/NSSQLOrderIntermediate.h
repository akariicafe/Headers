@class NSArray;

@interface NSSQLOrderIntermediate : NSSQLIntermediate {
    NSArray *_sortDescriptors;
}

- (id)generateSQLStringInContext:(id)a0;
- (void)dealloc;
- (id)initWithSortDescriptors:(id)a0 inScope:(id)a1;

@end
