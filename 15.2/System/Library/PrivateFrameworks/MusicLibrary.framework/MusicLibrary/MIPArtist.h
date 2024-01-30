@class NSString;

@interface MIPArtist : PBCodable <NSCopying> {
    struct { unsigned char persistentId : 1; unsigned char storeId : 1; } _has;
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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
