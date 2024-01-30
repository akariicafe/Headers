@class NSMutableDictionary, NSMutableSet;

@interface UIAvoidanceCoordinator : NSObject {
    NSMutableDictionary *_blockades;
    NSMutableSet *_clients;
    int _recurseCount;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avoidanceFrame;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)addAvoidanceObject:(id)a0;
- (id)findBlockadesForName:(id)a0;
- (id)findClientsForBlockade:(id)a0;
- (id)findNamesForBlockade:(id)a0;
- (void)releaseAll:(id)a0 withType:(unsigned long long)a1;
- (void)removeAvoidanceObject:(id)a0;
- (void)setGroupOfBlockades:(id)a0 forBlockadeIdentifier:(id)a1;
- (void)updateClients:(id)a0;

@end
