@class NSArray;

@interface NSSQLGroupByIntermediate : NSSQLIntermediate {
    NSArray *_properties;
}

- (id)initWithProperties:(id)a0 inScope:(id)a1;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;

@end
