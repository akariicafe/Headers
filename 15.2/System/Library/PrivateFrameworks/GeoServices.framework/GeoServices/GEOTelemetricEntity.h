@class NSString;

@interface GEOTelemetricEntity : PBCodable <NSCopying> {
    NSString *_eventDetail;
    unsigned long long _eventValue;
    int _eventKey;
    struct { unsigned char has_eventValue : 1; unsigned char has_eventKey : 1; } _flags;
}

@property (nonatomic) BOOL hasEventKey;
@property (nonatomic) int eventKey;
@property (nonatomic) BOOL hasEventValue;
@property (nonatomic) unsigned long long eventValue;
@property (readonly, nonatomic) BOOL hasEventDetail;
@property (retain, nonatomic) NSString *eventDetail;

+ (BOOL)isValid:(id)a0;

- (id)eventKeyAsString:(int)a0;
- (int)StringAsEventKey:(id)a0;
- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
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
- (id)dictionaryRepresentation;

@end
