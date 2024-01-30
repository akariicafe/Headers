@class NSSet, NSEnumerator;

@interface _PASSqliteNSSetCursor : _PASSqliteCollectionsCursor {
    NSSet *_set;
    id _currentValue;
    NSEnumerator *_valuesEnumerator;
}

@property (retain, nonatomic) NSSet *collection;

+ (const char *)sqliteMethodName;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (const char *)sqliteCreateTableStatement;

- (void)stepIndexedRow;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)setCollection:(id)a0;
- (id)currentIndexedValue;
- (void)finalizeConstraints;
- (void).cxx_destruct;
- (BOOL)currentIndexEof;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;

@end
