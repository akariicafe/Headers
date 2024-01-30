@class NSString;

@interface ATXMPBBlendingLayerRefreshTracker : PBCodable <NSCopying> {
    struct { unsigned char computationTime : 1; unsigned char interarrivalTime : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (nonatomic) BOOL hasInterarrivalTime;
@property (nonatomic) unsigned int interarrivalTime;
@property (nonatomic) BOOL hasComputationTime;
@property (nonatomic) unsigned int computationTime;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;

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

@end
