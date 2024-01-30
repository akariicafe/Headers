@class SYMessageHeader, NSString, SYErrorInfo;

@interface SYBatchChunkAck : PBCodable <NSCopying>

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *syncID;
@property (nonatomic) unsigned int chunkIndex;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) SYErrorInfo *error;

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

@end
