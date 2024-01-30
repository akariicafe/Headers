@interface GKAnonymousPlayerInternal : GKSpecialPlayerInternal

+ (BOOL)supportsSecureCoding;

- (id)alias;
- (id)playerID;
- (BOOL)isEqual:(id)a0;
- (id)teamPlayerID;
- (id)gamePlayerID;
- (BOOL)isAnonymousPlayer;

@end
