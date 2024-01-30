@class ICDrawingCommandData, NSUUID;

@interface ICDrawingCommand : NSObject

@property (readonly, nonatomic) ICDrawingCommandData *data;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) struct TopoID { NSUUID *replicaID; unsigned int clock; } timestamp;

- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0 version:(unsigned int)a1 sortedUUIDs:(id)a2;
- (id)initWithCommand:(id)a0 hidden:(BOOL)a1 timestamp:(struct TopoID { id x0; unsigned int x1; })a2;
- (BOOL)isEqualDrawingCommand:(id)a0;
- (unsigned int)saveToArchive:(void *)a0 sortedUUIDs:(id)a1 withPathData:(BOOL)a2;

@end
