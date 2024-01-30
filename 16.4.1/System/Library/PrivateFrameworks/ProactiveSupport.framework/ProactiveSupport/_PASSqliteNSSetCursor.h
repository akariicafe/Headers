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

- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)setCollection:(id)a0;
- (BOOL)currentIndexEof;
- (void)stepIndexedRow;
- (void)finalizeConstraints;
- (id)currentIndexedValue;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (void).cxx_destruct;

@end
