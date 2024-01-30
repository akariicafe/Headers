@class TSPData;

@interface TSPKnownFieldDataReference : TSPKnownFieldStringValue {
    TSPData *_data;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
