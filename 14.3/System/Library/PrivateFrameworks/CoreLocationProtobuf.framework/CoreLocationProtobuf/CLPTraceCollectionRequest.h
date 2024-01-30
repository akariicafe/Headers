@class CLPMeta, NSMutableArray;

@interface CLPTraceCollectionRequest : PBRequest <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

+ (Class)eventsType;

- (Class)responseClass;
- (int)StringAsType:(id)a0;
- (unsigned int)requestTypeCode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)clearEvents;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)eventsCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addEvents:(id)a0;
- (id)eventsAtIndex:(unsigned long long)a0;
- (id)typeAsString:(int)a0;

@end
