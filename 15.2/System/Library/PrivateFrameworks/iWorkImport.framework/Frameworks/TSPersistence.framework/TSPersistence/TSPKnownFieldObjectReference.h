@class TSPLazyReference;

@interface TSPKnownFieldObjectReference : TSPKnownFieldStringValue {
    TSPLazyReference *_reference;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;

@end
