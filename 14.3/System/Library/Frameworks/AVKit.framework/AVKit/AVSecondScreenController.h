@class AVObservationController, NSMutableOrderedSet;

@interface AVSecondScreenController : NSObject

@property (readonly, nonatomic) AVObservationController *observationController;
@property (readonly, nonatomic) NSMutableOrderedSet *secondScreens;
@property (readonly, nonatomic) NSMutableOrderedSet *connections;
@property (nonatomic) BOOL allowsUpdatingActiveConnection;

+ (id)sharedInstance;

- (void)removeConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addConnection:(id)a0;
- (void)dealloc;
- (id)_targetScreen;
- (id)activeConnection;
- (id)addConnectionForPlayer:(id)a0 playerLayer:(id)a1;
- (id)connectionPassingTest:(id /* block */)a0;
- (id)preferredConnection;
- (void)setPreferredConnection:(id)a0;
- (void)addSecondScreen:(id)a0;
- (void)removeSecondScreen:(id)a0;
- (id)_connectionForPlayer:(id)a0;
- (void)_updateActiveConnection;
- (void)_insertConnection:(id)a0 atIndex:(unsigned long long)a1;

@end
