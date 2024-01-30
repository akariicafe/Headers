@class AVObservationController, NSMutableOrderedSet;

@interface AVSecondScreenController : NSObject

@property (readonly, nonatomic) AVObservationController *observationController;
@property (readonly, nonatomic) NSMutableOrderedSet *secondScreens;
@property (readonly, nonatomic) NSMutableOrderedSet *connections;
@property (nonatomic) BOOL allowsUpdatingActiveConnection;

+ (id)sharedInstance;

- (void)removeSecondScreen:(id)a0;
- (void)_updateActiveConnection;
- (void)addSecondScreen:(id)a0;
- (id)_connectionForPlayer:(id)a0;
- (void)_insertConnection:(id)a0 atIndex:(unsigned long long)a1;
- (void)dealloc;
- (id)connectionPassingTest:(id /* block */)a0;
- (id)_targetScreen;
- (id)addConnectionForPlayer:(id)a0 playerLayer:(id)a1;
- (id)init;
- (void)addConnection:(id)a0;
- (void)setPreferredConnection:(id)a0;
- (id)preferredConnection;
- (void)removeConnection:(id)a0;
- (void).cxx_destruct;
- (id)activeConnection;

@end
