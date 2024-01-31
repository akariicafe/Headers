@class NSArray;

@interface NSSQLOrderIntermediate : NSSQLIntermediate {
    NSArray *_sortDescriptors;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (id)initWithSortDescriptors:(id)a0 inScope:(id)a1;

@end
