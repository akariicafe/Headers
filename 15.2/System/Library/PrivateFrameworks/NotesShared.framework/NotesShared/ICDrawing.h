@class NSUUID, TTVectorMultiTimestamp, NSMutableOrderedSet, NSDate, NSOrderedSet;

@interface ICDrawing : NSObject <NSCopying> {
    NSMutableOrderedSet *_visibleCommands;
    long long _orientation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _commandBounds;
}

@property (retain, nonatomic) TTVectorMultiTimestamp *timestamp;
@property (retain, nonatomic) NSDate *orientationTimestamp;
@property (readonly, nonatomic) NSUUID *replicaUUID;
@property (readonly, nonatomic) NSMutableOrderedSet *commands;
@property (readonly, nonatomic) NSOrderedSet *visibleCommands;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGSize { double width; double height; } unrotatedSize;
@property (readonly, nonatomic) long long imageOrientation;
@property (readonly, nonatomic) BOOL canChangeTransientOrientation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unrotatedBoundsInCommandSpace;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } fullBounds;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (struct CGSize { double x0; double x1; })defaultPixelSize;
+ (void)sortCommands:(id)a0;
+ (struct CGSize { double x0; double x1; })fullSize:(struct CGSize { double x0; double x1; })a0 forOrientation:(long long)a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })orientationTransform:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })defaultSizeOrientationTransform:(long long)a0;

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })orientationTransform;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })fullSize;
- (id)initWithReplicaID:(id)a0;
- (id)initWithData:(id)a0 replicaID:(id)a1;
- (unsigned long long)mergeWithDrawing:(id)a0;
- (id)initWithData:(id)a0 version:(unsigned int)a1 replicaID:(id)a2;
- (id)serializeWithPathData:(BOOL)a0 toVersion:(unsigned int *)a1;
- (void)invalidateBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })commandBounds;
- (id)initWithDrawing:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateCommandBounds;
- (void)setCommandIDForInsertion:(id)a0;
- (id)visibleCommandForInsertingCommand:(id)a0;
- (void)addNewCommand:(id)a0;
- (struct ICDrawingCommandID { unsigned int x0; id x1; unsigned int x2; })commandIDForNewCommand;
- (void)sortCommands;
- (id)initWithCommands:(id)a0 fromDrawing:(id)a1;
- (id)mutableCommands;
- (void)takeOrientationFrom:(id)a0;
- (BOOL)setTransientOrientation:(long long)a0;
- (id)insertNewTestCommand;
- (id)setCommand:(id)a0 hidden:(BOOL)a1;
- (id)initWithArchive:(const void *)a0 version:(unsigned int)a1 replicaID:(id)a2;
- (unsigned int)saveToArchive:(void *)a0 withPathData:(BOOL)a1;
- (id)serializeWithPathData:(BOOL)a0;

@end
