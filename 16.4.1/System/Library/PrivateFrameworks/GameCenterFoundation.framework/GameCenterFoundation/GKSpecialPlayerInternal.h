@interface GKSpecialPlayerInternal : GKPlayerInternal

+ (BOOL)supportsSecureCoding;

- (id)playerID;
- (void)setAlias:(id)a0;
- (BOOL)isLoaded;
- (id)alias;
- (void)setPlayerID:(id)a0;
- (id)photos;
- (void)setPhotos:(id)a0;
- (id)compositeName;
- (id)gamePlayerID;
- (void)setGamePlayerID:(id)a0;
- (void)setTeamPlayerID:(id)a0;
- (id)teamPlayerID;

@end
