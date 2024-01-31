@class NSArray;

@interface NSSQLGroupByIntermediate : NSSQLIntermediate {
    NSArray *_properties;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (id)initWithProperties:(id)a0 inScope:(id)a1;

@end
