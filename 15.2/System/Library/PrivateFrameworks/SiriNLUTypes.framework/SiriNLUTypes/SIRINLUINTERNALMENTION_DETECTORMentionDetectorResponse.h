@class SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUINTERNALMENTION_DETECTORMentionDetectorResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (retain, nonatomic) NSMutableArray *mentions;

+ (Class)mentionsType;

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
- (void)addMentions:(id)a0;
- (unsigned long long)mentionsCount;
- (void)clearMentions;
- (id)mentionsAtIndex:(unsigned long long)a0;

@end
