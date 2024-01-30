@class NSMutableArray;

@interface AWDMailSearchSessionReport : PBCodable <NSCopying> {
    struct { unsigned char messagesLeftToIndex : 1; unsigned char percentOfMessagesIndexed : 1; unsigned char timestamp : 1; unsigned char emailProvider : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *engagements;
@property (nonatomic) BOOL hasMessagesLeftToIndex;
@property (nonatomic) unsigned long long messagesLeftToIndex;
@property (nonatomic) BOOL hasPercentOfMessagesIndexed;
@property (nonatomic) unsigned long long percentOfMessagesIndexed;
@property (nonatomic) BOOL hasEmailProvider;
@property (nonatomic) int emailProvider;

+ (Class)engagementsType;

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
- (id)emailProviderAsString:(int)a0;
- (int)StringAsEmailProvider:(id)a0;
- (void)addEngagements:(id)a0;
- (unsigned long long)engagementsCount;
- (void)clearEngagements;
- (id)engagementsAtIndex:(unsigned long long)a0;

@end
