@interface RMSAddToWishlistMessage : PBCodable <NSCopying> {
    struct { unsigned char databaseID : 1; unsigned char itemID : 1; unsigned char sessionIdentifier : 1; } _has;
}

@property (nonatomic) BOOL hasItemID;
@property (nonatomic) unsigned long long itemID;
@property (nonatomic) BOOL hasDatabaseID;
@property (nonatomic) unsigned long long databaseID;
@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
