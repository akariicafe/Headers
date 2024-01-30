@class NSMutableArray;

@interface GEOLogMessageCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray *_logMessages;
}

@property (retain, nonatomic) NSMutableArray *logMessages;

+ (BOOL)isValid:(id)a0;
+ (Class)logMessageType;

- (void)addLogMessage:(id)a0;
- (unsigned long long)logMessagesCount;
- (unsigned int)requestTypeCode;
- (void)readAll:(BOOL)a0;
- (void)clearLogMessages;
- (Class)responseClass;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)logMessageAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
