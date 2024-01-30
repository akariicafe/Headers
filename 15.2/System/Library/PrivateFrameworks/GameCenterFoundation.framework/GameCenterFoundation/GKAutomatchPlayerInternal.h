@class NSString;

@interface GKAutomatchPlayerInternal : GKSpecialPlayerInternal

@property (nonatomic) long long automatchPosition;
@property (readonly, nonatomic) NSString *automatchPositionDisplayString;

+ (BOOL)supportsSecureCoding;

- (id)playerID;
- (id)alias;
- (id)gamePlayerID;
- (id)teamPlayerID;
- (BOOL)isAutomatchPlayer;

@end
