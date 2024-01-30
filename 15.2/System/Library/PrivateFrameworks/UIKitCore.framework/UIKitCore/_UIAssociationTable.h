@class NSMapTable;

@interface _UIAssociationTable : NSObject {
    NSMapTable *_leftToRightHashTables;
    NSMapTable *_rightToLeftHashTables;
}

- (void)registerAssociationWithLeftValue:(id)a0 rightValue:(id)a1;
- (BOOL)hasRightValuesForLeftValue:(id)a0;
- (id)rightValues;
- (BOOL)hasLeftValuesForRightValue:(id)a0;
- (id)leftValues;
- (id)description;
- (id)leftValueEnumerableForRightValue:(id)a0;
- (id)leftValuesForRightValue:(id)a0;
- (id)leftValueEnumerable;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)initWithLeftValueOptions:(unsigned long long)a0 rightValueOptions:(unsigned long long)a1;
- (id)rightValueEnumerableForLeftValue:(id)a0;
- (void)unregisterAssociationWithLeftValue:(id)a0 rightValue:(id)a1;
- (id)rightValuesForLeftValue:(id)a0;
- (id)rightValueEnumerable;

@end
