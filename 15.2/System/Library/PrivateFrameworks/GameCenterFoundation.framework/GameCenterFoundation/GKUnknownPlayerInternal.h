@interface GKUnknownPlayerInternal : GKSpecialPlayerInternal

+ (BOOL)supportsSecureCoding;

- (id)playerID;
- (id)gamePlayerID;
- (id)teamPlayerID;
- (BOOL)isUnknownPlayer;

@end
