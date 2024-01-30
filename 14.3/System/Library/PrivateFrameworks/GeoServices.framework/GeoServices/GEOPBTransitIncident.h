@class GEOPBTransitArtwork, NSString, PBDataReader, NSMutableArray, PBUnknownFields;

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

@property (nonatomic) BOOL hasIncidentIndex;
@property (nonatomic) unsigned int incidentIndex;
@property (nonatomic) BOOL hasIncidentMuid;
@property (nonatomic) unsigned long long incidentMuid;
@property (nonatomic) BOOL hasIconEnum;
@property (nonatomic) int iconEnum;
@property (nonatomic) BOOL hasStartDatetime;
@property (nonatomic) unsigned int startDatetime;
@property (nonatomic) BOOL hasEndDatetime;
@property (nonatomic) unsigned int endDatetime;
@property (nonatomic) BOOL hasCreationDatetime;
@property (nonatomic) unsigned int creationDatetime;
@property (nonatomic) BOOL hasUpdatedDatetime;
@property (nonatomic) unsigned int updatedDatetime;
@property (retain, nonatomic) NSMutableArray *affectedEntitys;
@property (nonatomic) BOOL hasBlocking;
@property (nonatomic) BOOL blocking;
@property (readonly, nonatomic) BOOL hasLongDescriptionString;
@property (retain, nonatomic) NSString *longDescriptionString;
@property (readonly, nonatomic) BOOL hasShortDescriptionString;
@property (retain, nonatomic) NSString *shortDescriptionString;
@property (readonly, nonatomic) BOOL hasTitleString;
@property (retain, nonatomic) NSString *titleString;
@property (readonly, nonatomic) BOOL hasMessageString;
@property (retain, nonatomic) NSString *messageString;
@property (readonly, nonatomic) BOOL hasMessageForAllBlocking;
@property (retain, nonatomic) NSString *messageForAllBlocking;
@property (readonly, nonatomic) BOOL hasMessageForIncidentType;
@property (retain, nonatomic) NSString *messageForIncidentType;
@property (readonly, nonatomic) BOOL hasIncidentTypeArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *incidentTypeArtwork;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)affectedEntityType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)addAffectedEntity:(id)a0;
- (unsigned long long)affectedEntitysCount;
- (void)clearAffectedEntitys;
- (id)affectedEntityAtIndex:(unsigned long long)a0;
- (id)iconEnumAsString:(int)a0;
- (int)StringAsIconEnum:(id)a0;

@end
