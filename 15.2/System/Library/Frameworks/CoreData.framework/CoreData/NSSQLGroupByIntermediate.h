@class NSArray;

@interface NSSQLGroupByIntermediate : NSSQLIntermediate {
    NSArray *_properties;
}

- (id)generateSQLStringInContext:(id)a0;
- (void)dealloc;
- (id)initWithProperties:(id)a0 inScope:(id)a1;

@end
