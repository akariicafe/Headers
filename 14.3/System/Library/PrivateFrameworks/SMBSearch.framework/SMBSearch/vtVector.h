@class NSMutableArray;

@interface vtVector : NSObject

@property unsigned int vVectorElements;
@property (retain) NSMutableArray *vVectorData;

- (id)init;
- (void).cxx_destruct;
- (int)addElement:(id)a0;

@end
