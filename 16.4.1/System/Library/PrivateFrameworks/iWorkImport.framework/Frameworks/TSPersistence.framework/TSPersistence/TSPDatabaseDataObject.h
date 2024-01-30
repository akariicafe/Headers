@class TSPData;

@interface TSPDatabaseDataObject : TSPObject

@property (readonly, nonatomic) TSPData *data;

- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)a0;

@end
