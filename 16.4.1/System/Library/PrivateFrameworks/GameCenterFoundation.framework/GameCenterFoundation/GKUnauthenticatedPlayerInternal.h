@interface GKUnauthenticatedPlayerInternal : GKLocalPlayerInternal {
    int _encodingCount;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)playerID;
- (BOOL)isEqual:(id)a0;
- (id)alias;
- (id)gamePlayerID;
- (id)teamPlayerID;

@end
