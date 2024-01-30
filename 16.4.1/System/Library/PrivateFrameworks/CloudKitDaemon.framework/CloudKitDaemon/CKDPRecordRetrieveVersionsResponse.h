@class NSMutableArray;

@interface CKDPRecordRetrieveVersionsResponse : PBCodable <NSCopying> {
    struct { unsigned char isDeleted : 1; } _has;
}

@property (nonatomic) BOOL hasIsDeleted;
@property (nonatomic) BOOL isDeleted;
@property (retain, nonatomic) NSMutableArray *recordVersions;

+ (Class)recordVersionsType;

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
- (void)addRecordVersions:(id)a0;
- (void)clearRecordVersions;
- (id)recordVersionsAtIndex:(unsigned long long)a0;
- (unsigned long long)recordVersionsCount;

@end
