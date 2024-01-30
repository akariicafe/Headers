@class NSMapTable;

@interface _UIAssociationTable : NSObject {
    NSMapTable *_leftToRightHashTables;
    NSMapTable *_rightToLeftHashTables;
}

- (BOOL)isEmpty;
- (id)rightValuesForLeftValue:(id)a0;
- (BOOL)hasLeftValuesForRightValue:(id)a0;
- (id)leftValueEnumerable;
- (id)leftValues;
- (id)rightValueEnumerable;
- (id)rightValueEnumerableForLeftValue:(id)a0;
- (id)leftValueEnumerableForRightValue:(id)a0;
- (id)description;
- (id)initWithLeftValueOptions:(unsigned long long)a0 rightValueOptions:(unsigned long long)a1;
- (void)registerAssociationWithLeftValue:(id)a0 rightValue:(id)a1;
- (id)rightValues;
- (BOOL)hasRightValuesForLeftValue:(id)a0;
- (void).cxx_destruct;
- (void)unregisterAssociationWithLeftValue:(id)a0 rightValue:(id)a1;
- (id)leftValuesForRightValue:(id)a0;

@end
