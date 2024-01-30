@class NSMutableArray;

@interface GEOLogMessage : PBCodable <NSCopying> {
    NSMutableArray *_logMsgEvents;
    unsigned int _groupRetryCount;
    int _logMessageType;
    struct { unsigned char has_groupRetryCount : 1; unsigned char has_logMessageType : 1; } _flags;
}

@property (nonatomic) BOOL hasGroupRetryCount;
@property (nonatomic) unsigned int groupRetryCount;
@property (retain, nonatomic) NSMutableArray *logMsgEvents;
@property (nonatomic) BOOL hasLogMessageType;
@property (nonatomic) int logMessageType;

+ (Class)logMsgEventType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)logMessageTypeAsString:(int)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)clearLogMsgEvents;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (int)StringAsLogMessageType:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addLogMsgEvent:(id)a0;
- (unsigned long long)logMsgEventsCount;
- (id)initWithDictionary:(id)a0;
- (id)logMsgEventAtIndex:(unsigned long long)a0;

@end
