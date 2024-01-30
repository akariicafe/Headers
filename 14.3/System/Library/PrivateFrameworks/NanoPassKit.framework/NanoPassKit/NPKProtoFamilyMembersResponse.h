@class NSMutableArray;

@interface NPKProtoFamilyMembersResponse : PBCodable <NSCopying> {
    struct { unsigned char success : 1; } _has;
}

@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSMutableArray *familyMembers;

+ (Class)familyMembersType;

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
- (void)addFamilyMembers:(id)a0;
- (unsigned long long)familyMembersCount;
- (void)clearFamilyMembers;
- (id)familyMembersAtIndex:(unsigned long long)a0;

@end
