@class NSMutableArray;

@interface CKDPRecordRetrieveVersionsResponse : PBCodable <NSCopying> {
    struct { unsigned char isDeleted : 1; } _has;
}

@property (nonatomic) BOOL hasIsDeleted;
@property (nonatomic) BOOL isDeleted;
@property (retain, nonatomic) NSMutableArray *recordVersions;

+ (Class)recordVersionsType;

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
- (void)addRecordVersions:(id)a0;
- (unsigned long long)recordVersionsCount;
- (void)clearRecordVersions;
- (id)recordVersionsAtIndex:(unsigned long long)a0;

@end
