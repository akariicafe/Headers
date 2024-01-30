@protocol NSFastEnumeration;

@interface CPLMapEnumerator : NSObject <NSFastEnumeration> {
    id<NSFastEnumeration> _enumerator;
    id *_resultValues;
    unsigned long long _previousResultValuesLength;
    unsigned long long _previousResultValuesCount;
    unsigned long long _previousItemsPtrLength;
    id *_itemsPtr;
}

@property (readonly, nonatomic) id /* block */ mapBlock;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)dealloc;
- (id)initWithEnumerator:(id)a0;
- (void).cxx_destruct;
- (id)initWithEnumerator:(id)a0 map:(id /* block */)a1;

@end
