@class NSMutableArray;

@interface NPKProtoAddISO18013BlobsRequest : PBRequest <NSCopying> {
    struct { unsigned char cardType : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *subcredentialDatas;
@property (retain, nonatomic) NSMutableArray *isoblobs;
@property (nonatomic) BOOL hasCardType;
@property (nonatomic) int cardType;

+ (Class)isoblobsType;
+ (Class)subcredentialDataType;

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
- (int)StringAsCardType:(id)a0;
- (void)addIsoblobs:(id)a0;
- (void)addSubcredentialData:(id)a0;
- (id)cardTypeAsString:(int)a0;
- (void)clearIsoblobs;
- (void)clearSubcredentialDatas;
- (id)isoblobsAtIndex:(unsigned long long)a0;
- (unsigned long long)isoblobsCount;
- (id)subcredentialDataAtIndex:(unsigned long long)a0;
- (unsigned long long)subcredentialDatasCount;

@end
