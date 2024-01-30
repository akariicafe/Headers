@class NSObject, TSUUUIDPath;

@interface TSWPObjectPlacement : NSObject

@property (retain, nonatomic) TSUUUIDPath *uuidPath;
@property (retain, nonatomic) NSObject *object;
@property (nonatomic) int index;

+ (id)objectPlacementWithObject:(id)a0 uuidPath:(id)a1 index:(int)a2;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 uuidPath:(id)a1 index:(int)a2;

@end
