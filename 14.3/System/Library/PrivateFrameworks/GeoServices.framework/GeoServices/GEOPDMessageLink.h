@class PBDataReader, NSString, GEOTimezone, NSMutableArray, PBUnknownFields;

@interface GEOPDMessageLink : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_hoursOfOperations;
    NSString *_messageId;
    NSString *_messageUrl;
    NSString *_navBackgroundColor;
    NSString *_navTintColor;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _responseTime;
    BOOL _isVerified;
    struct { unsigned char has_responseTime : 1; unsigned char has_isVerified : 1; unsigned char read_unknownFields : 1; unsigned char read_hoursOfOperations : 1; unsigned char read_messageId : 1; unsigned char read_messageUrl : 1; unsigned char read_navBackgroundColor : 1; unsigned char read_navTintColor : 1; unsigned char read_timezone : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMessageId;
@property (retain, nonatomic) NSString *messageId;
@property (readonly, nonatomic) BOOL hasMessageUrl;
@property (retain, nonatomic) NSString *messageUrl;
@property (nonatomic) BOOL hasResponseTime;
@property (nonatomic) int responseTime;
@property (retain, nonatomic) NSMutableArray *hoursOfOperations;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (retain, nonatomic) GEOTimezone *timezone;
@property (nonatomic) BOOL hasIsVerified;
@property (nonatomic) BOOL isVerified;
@property (readonly, nonatomic) BOOL hasNavBackgroundColor;
@property (retain, nonatomic) NSString *navBackgroundColor;
@property (readonly, nonatomic) BOOL hasNavTintColor;
@property (retain, nonatomic) NSString *navTintColor;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)hoursOfOperationType;
+ (id)messageLinkForPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)addHoursOfOperation:(id)a0;
- (unsigned long long)hoursOfOperationsCount;
- (void)clearHoursOfOperations;
- (id)hoursOfOperationAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (id)responseTimeAsString:(int)a0;
- (int)StringAsResponseTime:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
