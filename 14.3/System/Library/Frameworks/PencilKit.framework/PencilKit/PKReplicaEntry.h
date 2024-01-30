@class PKDrawing;

@interface PKReplicaEntry : NSObject <NSCoding>

@property (nonatomic) unsigned int replicaUUIDIndex;
@property (nonatomic) unsigned int clock;
@property (nonatomic) unsigned int subclock;
@property (nonatomic) BOOL inUse;
@property (nonatomic) PKDrawing *drawing;

- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithReplicaUUIDIndex:(unsigned int)a0 clock:(unsigned int)a1 subclock:(unsigned int)a2 inUse:(BOOL)a3 forDrawing:(id)a4;

@end
