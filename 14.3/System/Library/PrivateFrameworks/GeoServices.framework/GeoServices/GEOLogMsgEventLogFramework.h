@class NSMutableArray;

@interface GEOLogMsgEventLogFramework : PBCodable <NSCopying> {
    NSMutableArray *_logFrameworkItems;
    unsigned long long _messageSize;
    unsigned int _messageCount;
    int _messageType;
    int _metricState;
    int _metricType;
    int _purgeReason;
    struct { unsigned char has_messageSize : 1; unsigned char has_messageCount : 1; unsigned char has_messageType : 1; unsigned char has_metricState : 1; unsigned char has_metricType : 1; unsigned char has_purgeReason : 1; } _flags;
}

@property (nonatomic) BOOL hasMetricType;
@property (nonatomic) int metricType;
@property (nonatomic) BOOL hasMetricState;
@property (nonatomic) int metricState;
@property (nonatomic) BOOL hasMessageCount;
@property (nonatomic) unsigned int messageCount;
@property (nonatomic) BOOL hasMessageSize;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) int messageType;
@property (retain, nonatomic) NSMutableArray *logFrameworkItems;
@property (nonatomic) BOOL hasPurgeReason;
@property (nonatomic) int purgeReason;

+ (Class)logFrameworkItemType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addLogFrameworkItem:(id)a0;
- (unsigned long long)logFrameworkItemsCount;
- (void)clearLogFrameworkItems;
- (id)logFrameworkItemAtIndex:(unsigned long long)a0;
- (id)messageTypeAsString:(int)a0;
- (int)StringAsMessageType:(id)a0;
- (id)purgeReasonAsString:(int)a0;
- (int)StringAsPurgeReason:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)metricTypeAsString:(int)a0;
- (int)StringAsMetricType:(id)a0;
- (id)metricStateAsString:(int)a0;
- (int)StringAsMetricState:(id)a0;

@end
