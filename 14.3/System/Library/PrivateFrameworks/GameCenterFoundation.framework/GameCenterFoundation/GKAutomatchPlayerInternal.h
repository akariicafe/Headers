@interface GKAutomatchPlayerInternal : GKSpecialPlayerInternal

@property (nonatomic) long long automatchPosition;

+ (BOOL)supportsSecureCoding;

- (id)alias;
- (id)playerID;
- (BOOL)isAutomatchPlayer;
- (id)teamPlayerID;
- (id)gamePlayerID;

@end
