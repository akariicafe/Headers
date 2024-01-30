@class TSPLazyReferenceArray;

@interface TSPKnownFieldRepeatedObjectReference : TSPKnownFieldRepeatedStringValue {
    TSPLazyReferenceArray *_strongObjects;
    TSPLazyReferenceArray *_weakObjects;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
