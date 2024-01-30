@class NSData, PETMetadata, NSMutableArray;

@interface PETUpload : PBCodable <NSCopying> {
    struct { unsigned char isCompressed : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) PETMetadata *metadata;
@property (retain, nonatomic) NSMutableArray *aggregatedMessages;
@property (retain, nonatomic) NSMutableArray *unaggregatedMessages;
@property (nonatomic) BOOL hasIsCompressed;
@property (nonatomic) BOOL isCompressed;
@property (readonly, nonatomic) BOOL hasCompressedData;
@property (retain, nonatomic) NSData *compressedData;
@property (readonly, nonatomic) BOOL hasCompressedMessages;
@property (retain, nonatomic) NSData *compressedMessages;

+ (Class)aggregatedMessagesType;
+ (Class)unaggregatedMessagesType;

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
- (void)clearAggregatedMessages;
- (void)addAggregatedMessages:(id)a0;
- (unsigned long long)aggregatedMessagesCount;
- (id)aggregatedMessagesAtIndex:(unsigned long long)a0;
- (void)clearUnaggregatedMessages;
- (void)addUnaggregatedMessages:(id)a0;
- (unsigned long long)unaggregatedMessagesCount;
- (id)unaggregatedMessagesAtIndex:(unsigned long long)a0;

@end
