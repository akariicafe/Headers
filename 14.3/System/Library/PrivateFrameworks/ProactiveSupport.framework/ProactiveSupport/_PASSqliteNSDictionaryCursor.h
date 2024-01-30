@class NSDictionary, NSEnumerator;

@interface _PASSqliteNSDictionaryCursor : _PASSqliteKeyValueCursor {
    NSDictionary *_dictionary;
    NSEnumerator *_keysEnumerator;
    id _currentKey;
    id _currentValue;
    id _valueEqualTo;
}

@property (retain, nonatomic) NSDictionary *collection;

+ (id)planningInfoForKeyConstraint:(int)a0;
+ (const char *)sqliteMethodName;

- (void)setCollection:(id)a0;
- (void).cxx_destruct;
- (id)currentIndexedValue;
- (void)finalizeConstraints;
- (void)stepIndexedRow;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;
- (id)currentIndexedKey;

@end
