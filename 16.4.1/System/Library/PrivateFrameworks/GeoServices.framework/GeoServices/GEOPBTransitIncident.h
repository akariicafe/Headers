@class PBDataReader, GEOPBTransitArtwork, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPBTransitIncident : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_affectedEntitys;
    unsigned long long _incidentMuid;
    GEOPBTransitArtwork *_incidentTypeArtwork;
    NSString *_longDescriptionString;
    NSString *_messageForAllBlocking;
    NSString *_messageForIncidentType;
    NSString *_messageString;
    NSString *_shortDescriptionString;
    NSString *_titleString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _creationDatetime;
    unsigned int _endDatetime;
    int _iconEnum;
    unsigned int _incidentIndex;
    unsigned int _startDatetime;
    unsigned int _updatedDatetime;
    BOOL _blocking;
    struct { unsigned char has_incidentMuid : 1; unsigned char has_creationDatetime : 1; unsigned char has_endDatetime : 1; unsigned char has_iconEnum : 1; unsigned char has_incidentIndex : 1; unsigned char has_startDatetime : 1; unsigned char has_updatedDatetime : 1; unsigned char has_blocking : 1; unsigned char read_unknownFields : 1; unsigned char read_affectedEntitys : 1; unsigned char read_incidentTypeArtwork : 1; unsigned char read_longDescriptionString : 1; unsigned char read_messageForAllBlocking : 1; unsigned char read_messageForIncidentType : 1; unsigned char read_messageString : 1; unsigned char read_shortDescriptionString : 1; unsigned char read_titleString : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
