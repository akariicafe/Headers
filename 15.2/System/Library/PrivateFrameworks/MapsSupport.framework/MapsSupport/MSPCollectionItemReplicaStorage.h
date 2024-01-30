@class NSString, NSMutableArray, PBUnknownFields;

@interface MSPCollectionItemReplicaStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSMutableArray *records;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)recordsType;

- (void)clearRecords;
- (unsigned long long)recordsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)recordsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addRecords:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
