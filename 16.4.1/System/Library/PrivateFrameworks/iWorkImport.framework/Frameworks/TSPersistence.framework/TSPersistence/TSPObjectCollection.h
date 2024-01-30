@class NSArray;

@interface TSPObjectCollection : TSPObject

@property (readonly, nonatomic) NSArray *objects;

+ (BOOL)tsp_isInternalObjectContainerClass;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)initWithContext:(id)a0 objects:(id)a1;
- (id)tsp_publicLoggingDescription;

@end
