@class NSArray;

@interface TSPUnknownFieldDataReference : TSPUnknownField {
    NSArray *_datas;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
