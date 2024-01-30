@interface GKAnonymousPlayerInternal : GKSpecialPlayerInternal

+ (BOOL)supportsSecureCoding;

- (id)playerID;
- (BOOL)isEqual:(id)a0;
- (id)alias;
- (id)gamePlayerID;
- (BOOL)isAnonymousPlayer;
- (id)teamPlayerID;

@end
