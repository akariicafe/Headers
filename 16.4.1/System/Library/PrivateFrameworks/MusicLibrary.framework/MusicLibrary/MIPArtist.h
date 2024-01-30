@class NSString;

@interface MIPArtist : PBCodable <NSCopying> {
    struct { unsigned char favoritedDateTime : 1; unsigned char persistentId : 1; unsigned char storeId : 1; unsigned char favoriteState : 1; } _has;
}

@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) long long storeId;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasSortName;
@property (retain, nonatomic) NSString *sortName;
@property (readonly, nonatomic) BOOL hasArtworkId;
@property (retain, nonatomic) NSString *artworkId;
@property (nonatomic) BOOL hasPersistentId;
@property (nonatomic) long long persistentId;
@property (readonly, nonatomic) BOOL hasCloudUniversalLibraryId;
@property (retain, nonatomic) NSString *cloudUniversalLibraryId;
@property (nonatomic) BOOL hasFavoriteState;
@property (nonatomic) int favoriteState;
@property (nonatomic) BOOL hasFavoritedDateTime;
@property (nonatomic) long long favoritedDateTime;
@property (readonly, nonatomic) BOOL hasCloudLibraryId;
@property (retain, nonatomic) NSString *cloudLibraryId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
