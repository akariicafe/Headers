@class TSPLazyReferenceArray;

@interface TSPKnownFieldRepeatedObjectReference : TSPKnownFieldRepeatedStringValue {
    TSPLazyReferenceArray *_strongObjects;
    TSPLazyReferenceArray *_weakObjects;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;

@end
