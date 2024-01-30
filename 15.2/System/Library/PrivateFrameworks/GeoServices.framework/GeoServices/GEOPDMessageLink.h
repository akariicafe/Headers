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

+ (id)messageLinkForPlaceData:(id)a0;

- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
