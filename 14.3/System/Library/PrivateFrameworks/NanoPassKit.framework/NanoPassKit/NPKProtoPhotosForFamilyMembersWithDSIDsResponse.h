@class NSMutableArray;

@interface NPKProtoPhotosForFamilyMembersWithDSIDsResponse : PBCodable <NSCopying> {
    struct { unsigned char success : 1; } _has;
}

@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSMutableArray *familyPhotosIDs;
@property (retain, nonatomic) NSMutableArray *familyPhotos;

+ (Class)familyPhotosIDsType;
+ (Class)familyPhotosType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addFamilyPhotosIDs:(id)a0;
- (void)addFamilyPhotos:(id)a0;
- (unsigned long long)familyPhotosIDsCount;
- (void)clearFamilyPhotosIDs;
- (id)familyPhotosIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)familyPhotosCount;
- (void)clearFamilyPhotos;
- (id)familyPhotosAtIndex:(unsigned long long)a0;

@end
