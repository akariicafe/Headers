@interface ContactEmbeddingAnalysisPETNeuralNetEmbedding : PBCodable <NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _embeddings;
}

@property (readonly, nonatomic) unsigned long long embeddingsCount;
@property (readonly, nonatomic) float *embeddings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)setEmbeddings:(float *)a0 count:(unsigned long long)a1;
- (void)clearEmbeddings;
- (void)addEmbeddings:(float)a0;
- (float)embeddingsAtIndex:(unsigned long long)a0;

@end
