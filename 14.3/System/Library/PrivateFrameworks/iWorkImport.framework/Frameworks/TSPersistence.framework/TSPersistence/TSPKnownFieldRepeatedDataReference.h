@class NSArray;

@interface TSPKnownFieldRepeatedDataReference : TSPKnownFieldRepeatedStringValue {
    NSArray *_datas;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;

@end
