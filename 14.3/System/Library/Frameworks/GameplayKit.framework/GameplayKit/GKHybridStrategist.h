@class NSString;
@protocol GKRandom, GKGameModel;

@interface GKHybridStrategist : NSObject <GKStrategist> {
    struct GKCHybridStrategist { struct vector<id<GKGameModel>, std::__1::allocator<id<GKGameModel> > > { id *x0; id *x1; struct __compressed_pair<__strong id<GKGameModel> *, std::__1::allocator<id<GKGameModel> > > { id *x0; } x2; } x0; struct vector<std::__1::vector<long, std::__1::allocator<long> >, std::__1::allocator<std::__1::vector<long, std::__1::allocator<long> > > > { struct vector<long, std::__1::allocator<long> > *x0; struct vector<long, std::__1::allocator<long> > *x1; struct __compressed_pair<std::__1::vector<long, std::__1::allocator<long> > *, std::__1::allocator<std::__1::vector<long, std::__1::allocator<long> > > > { struct vector<long, std::__1::allocator<long> > *x0; } x2; } x1; id x2; id x3; id x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; BOOL x9; BOOL x10; } *_hybridStrategist;
}

@property (nonatomic) unsigned long long budget;
@property (nonatomic) unsigned long long explorationParameter;
@property (nonatomic) unsigned long long maxLookAheadDepth;
@property (retain, nonatomic) id<GKGameModel> gameModel;
@property (retain, nonatomic) id<GKRandom> randomSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)bestMoveForActivePlayer;
- (BOOL)validateGameModel:(id)a0;
- (BOOL)validateRandomSource;

@end
