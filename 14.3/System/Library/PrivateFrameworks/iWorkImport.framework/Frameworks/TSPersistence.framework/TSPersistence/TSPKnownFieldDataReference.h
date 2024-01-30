@class TSPData;

@interface TSPKnownFieldDataReference : TSPKnownFieldStringValue {
    TSPData *_data;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;

@end
