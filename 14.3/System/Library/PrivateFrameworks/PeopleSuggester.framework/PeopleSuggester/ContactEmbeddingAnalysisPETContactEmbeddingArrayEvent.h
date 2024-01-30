@class NSString, NSMutableArray;

@interface ContactEmbeddingAnalysisPETContactEmbeddingArrayEvent : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *sessinobd;
@property (retain, nonatomic) NSString *userId;
@property (retain, nonatomic) NSMutableArray *contactEmbeddings;

+ (Class)contactEmbeddingType;

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
- (void)addContactEmbedding:(id)a0;
- (unsigned long long)contactEmbeddingsCount;
- (void)clearContactEmbeddings;
- (id)contactEmbeddingAtIndex:(unsigned long long)a0;

@end
