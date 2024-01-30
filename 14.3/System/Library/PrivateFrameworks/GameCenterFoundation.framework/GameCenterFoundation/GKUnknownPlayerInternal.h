@interface GKUnknownPlayerInternal : GKSpecialPlayerInternal

+ (BOOL)supportsSecureCoding;

- (id)playerID;
- (id)teamPlayerID;
- (id)gamePlayerID;
- (BOOL)isUnknownPlayer;

@end
