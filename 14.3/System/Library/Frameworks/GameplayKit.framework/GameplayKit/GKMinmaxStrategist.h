@class NSString;
@protocol GKRandom, GKGameModel;

@interface GKMinmaxStrategist : NSObject <GKStrategist> {
    struct GKCMinmaxStrategist { struct vector<id<GKGameModel>, std::__1::allocator<id<GKGameModel> > > { id *x0; id *x1; struct __compressed_pair<__strong id<GKGameModel> *, std::__1::allocator<id<GKGameModel> > > { id *x0; } x2; } x0; struct list<GKCMoveData, std::__1::allocator<GKCMoveData> > { struct __list_node_base<GKCMoveData, void *> { struct __list_node_base<GKCMoveData, void *> *x0; struct __list_node_base<GKCMoveData, void *> *x1; } x0; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<GKCMoveData, void *> > > { unsigned long long x0; } x1; } x1; struct vector<std::__1::vector<long, std::__1::allocator<long> >, std::__1::allocator<std::__1::vector<long, std::__1::allocator<long> > > > { struct vector<long, std::__1::allocator<long> > *x0; struct vector<long, std::__1::allocator<long> > *x1; struct __compressed_pair<std::__1::vector<long, std::__1::allocator<long> > *, std::__1::allocator<std::__1::vector<long, std::__1::allocator<long> > > > { struct vector<long, std::__1::allocator<long> > *x0; } x2; } x2; id x3; id x4; id x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; BOOL x17; BOOL x18; BOOL x19; } *_cppMinmax;
}

@property (nonatomic) long long maxLookAheadDepth;
@property (retain, nonatomic) id<GKGameModel> gameModel;
@property (retain, nonatomic) id<GKRandom> randomSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)bestMoveForActivePlayer;
- (id)bestMoveForPlayer:(id)a0;
- (id)randomMoveForPlayer:(id)a0 fromNumberOfBestMoves:(long long)a1;

@end
