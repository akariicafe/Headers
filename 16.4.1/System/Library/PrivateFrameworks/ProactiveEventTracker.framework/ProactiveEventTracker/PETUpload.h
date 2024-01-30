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
- (void)addAggregatedMessages:(id)a0;
- (void)addUnaggregatedMessages:(id)a0;
- (id)aggregatedMessagesAtIndex:(unsigned long long)a0;
- (unsigned long long)aggregatedMessagesCount;
- (void)clearAggregatedMessages;
- (void)clearUnaggregatedMessages;
- (id)unaggregatedMessagesAtIndex:(unsigned long long)a0;
- (unsigned long long)unaggregatedMessagesCount;

@end
