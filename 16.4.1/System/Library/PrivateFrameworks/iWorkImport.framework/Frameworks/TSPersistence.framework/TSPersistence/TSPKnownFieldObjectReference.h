@class TSPLazyReference;

@interface TSPKnownFieldObjectReference : TSPKnownFieldStringValue {
    TSPLazyReference *_reference;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
