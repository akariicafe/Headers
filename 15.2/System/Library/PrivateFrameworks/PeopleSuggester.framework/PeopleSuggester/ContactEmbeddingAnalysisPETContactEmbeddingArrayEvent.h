@class NSString, NSMutableArray;

@interface ContactEmbeddingAnalysisPETContactEmbeddingArrayEvent : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *sessinobd;
@property (retain, nonatomic) NSString *userId;
@property (retain, nonatomic) NSMutableArray *contactEmbeddings;

+ (Class)contactEmbeddingType;

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
- (void)addContactEmbedding:(id)a0;
- (unsigned long long)contactEmbeddingsCount;
- (void)clearContactEmbeddings;
- (id)contactEmbeddingAtIndex:(unsigned long long)a0;

@end
