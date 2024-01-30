@class FINode;

@interface FINode_ICloudAppLibrary : FIDSNode

@property (retain, nonatomic) FINode *documentsFolder;

- (void).cxx_destruct;
- (id)propertyAsDate:(unsigned int)a0;
- (void)dispatchEvent:(id)a0 forObserver:(id)a1;
- (id)fetchLastUsedDate:(BOOL)a0;
- (id)iteratorIncludingInvisibleItems:(BOOL)a0 synchronous:(BOOL)a1;
- (id)nodesToObserve;

@end
