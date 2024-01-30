@interface GKUnauthenticatedPlayerInternal : GKLocalPlayerInternal {
    int _encodingCount;
}

+ (BOOL)supportsSecureCoding;

- (id)alias;
- (id)playerID;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)teamPlayerID;
- (id)gamePlayerID;

@end
