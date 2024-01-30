@class NSArray;

@interface TSPObjectCollection : TSPObject

@property (readonly, nonatomic) NSArray *objects;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)tsp_publicLoggingDescription;
- (id)initWithContext:(id)a0 objects:(id)a1;

@end
