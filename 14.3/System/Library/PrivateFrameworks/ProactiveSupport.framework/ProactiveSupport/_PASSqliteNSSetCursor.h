@class NSSet, NSEnumerator;

@interface _PASSqliteNSSetCursor : _PASSqliteCollectionsCursor {
    NSSet *_set;
    id _currentValue;
    NSEnumerator *_valuesEnumerator;
}

@property (retain, nonatomic) NSSet *collection;

+ (const char *)sqliteCreateTableStatement;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (const char *)sqliteMethodName;

- (void)setCollection:(id)a0;
- (void).cxx_destruct;
- (id)currentIndexedValue;
- (void)finalizeConstraints;
- (void)stepIndexedRow;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (BOOL)currentIndexEof;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;

@end
