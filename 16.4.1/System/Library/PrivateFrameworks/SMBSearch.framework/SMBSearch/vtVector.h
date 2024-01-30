@class NSMutableArray;

@interface vtVector : NSObject

@property unsigned int vVectorElements;
@property (retain) NSMutableArray *vVectorData;

- (int)addElement:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
