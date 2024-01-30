@class PKDrawingConcrete;

@interface PKReplicaEntry : NSObject <NSCoding>

@property (nonatomic) unsigned int replicaUUIDIndex;
@property (nonatomic) unsigned int clock;
@property (nonatomic) unsigned int subclock;
@property (nonatomic) BOOL inUse;
@property (nonatomic) PKDrawingConcrete *drawing;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithReplicaUUIDIndex:(unsigned int)a0 clock:(unsigned int)a1 subclock:(unsigned int)a2 inUse:(BOOL)a3 forDrawing:(id)a4;

@end
