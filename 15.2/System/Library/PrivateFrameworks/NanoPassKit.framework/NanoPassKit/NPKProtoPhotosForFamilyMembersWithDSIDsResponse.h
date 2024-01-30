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
- (void)addFamilyPhotosIDs:(id)a0;
- (void)addFamilyPhotos:(id)a0;
- (unsigned long long)familyPhotosIDsCount;
- (void)clearFamilyPhotosIDs;
- (id)familyPhotosIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)familyPhotosCount;
- (void)clearFamilyPhotos;
- (id)familyPhotosAtIndex:(unsigned long long)a0;

@end
