@class NSMapTable;

@interface _UIAssociationTable : NSObject {
    NSMapTable *_leftToRightHashTables;
    NSMapTable *_rightToLeftHashTables;
}

- (BOOL)hasRightValuesForLeftValue:(id)a0;
- (BOOL)isEmpty;
- (void)unregisterAssociationWithLeftValue:(id)a0 rightValue:(id)a1;
- (id)rightValues;
- (void).cxx_destruct;
- (id)initWithLeftValueOptions:(unsigned long long)a0 rightValueOptions:(unsigned long long)a1;
- (id)leftValueEnumerableForRightValue:(id)a0;
- (void)registerAssociationWithLeftValue:(id)a0 rightValue:(id)a1;
- (id)leftValueEnumerable;
- (id)leftValues;
- (id)rightValueEnumerableForLeftValue:(id)a0;
- (id)description;
- (id)rightValuesForLeftValue:(id)a0;
- (id)leftValuesForRightValue:(id)a0;
- (BOOL)hasLeftValuesForRightValue:(id)a0;
- (id)rightValueEnumerable;

@end
