@class GEOAdvisoryNotice, PBUnknownFields, PBDataReader, GEOClickableAdvisory, NSMutableArray;

@interface GEOAdvisoriesInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOClickableAdvisory *_clickableAdvisory;
    GEOAdvisoryNotice *_evAdvisory;
    NSMutableArray *_genericAdvisorys;
    NSMutableArray *_incidentAdvisorys;
    NSMutableArray *_noticeAdvisorys;
    GEOAdvisoryNotice *_tollAdvisory;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_clickableAdvisory : 1; unsigned char read_evAdvisory : 1; unsigned char read_genericAdvisorys : 1; unsigned char read_incidentAdvisorys : 1; unsigned char read_noticeAdvisorys : 1; unsigned char read_tollAdvisory : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *noticeAdvisorys;
@property (readonly, nonatomic) BOOL hasClickableAdvisory;
@property (retain, nonatomic) GEOClickableAdvisory *clickableAdvisory;
@property (readonly, nonatomic) BOOL hasTollAdvisory;
@property (retain, nonatomic) GEOAdvisoryNotice *tollAdvisory;
@property (readonly, nonatomic) BOOL hasEvAdvisory;
@property (retain, nonatomic) GEOAdvisoryNotice *evAdvisory;
@property (retain, nonatomic) NSMutableArray *incidentAdvisorys;
@property (retain, nonatomic) NSMutableArray *genericAdvisorys;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)genericAdvisoryType;
+ (Class)incidentAdvisoryType;
+ (Class)noticeAdvisoryType;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (void)addGenericAdvisory:(id)a0;
- (void)addIncidentAdvisory:(id)a0;
- (void)addNoticeAdvisory:(id)a0;
- (void)clearGenericAdvisorys;
- (void)clearIncidentAdvisorys;
- (void)clearNoticeAdvisorys;
- (id)genericAdvisoryAtIndex:(unsigned long long)a0;
- (unsigned long long)genericAdvisorysCount;
- (id)incidentAdvisoryAtIndex:(unsigned long long)a0;
- (unsigned long long)incidentAdvisorysCount;
- (id)noticeAdvisoryAtIndex:(unsigned long long)a0;
- (unsigned long long)noticeAdvisorysCount;

@end
