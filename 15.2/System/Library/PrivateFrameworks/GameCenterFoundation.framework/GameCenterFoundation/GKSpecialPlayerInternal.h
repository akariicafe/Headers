@interface GKSpecialPlayerInternal : GKPlayerInternal

+ (BOOL)supportsSecureCoding;

- (id)playerID;
- (BOOL)isLoaded;
- (id)alias;
- (void)setAlias:(id)a0;
- (void)setPhotos:(id)a0;
- (id)photos;
- (id)gamePlayerID;
- (void)setPlayerID:(id)a0;
- (id)compositeName;
- (id)teamPlayerID;
- (void)setGamePlayerID:(id)a0;
- (void)setTeamPlayerID:(id)a0;

@end
