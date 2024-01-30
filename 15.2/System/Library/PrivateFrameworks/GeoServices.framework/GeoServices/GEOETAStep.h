@class PBDataReader, GEOTimeCheckpoints, GEOEVStateInfo, GEOStopStepEVInfo, PBUnknownFields;

@interface GEOETAStep : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOStopStepEVInfo *_evInfo;
    GEOEVStateInfo *_evStateInfo;
    GEOTimeCheckpoints *_timeCheckpoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _distanceCm;
    unsigned int _expectedTime;
    unsigned int _stepID;
    unsigned int _zilchPathIndex;
    int _zilchPointIndex;
    struct { unsigned char has_distanceCm : 1; unsigned char has_expectedTime : 1; unsigned char has_stepID : 1; unsigned char has_zilchPathIndex : 1; unsigned char has_zilchPointIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_evInfo : 1; unsigned char read_evStateInfo : 1; unsigned char read_timeCheckpoints : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) BOOL hasExpectedTime;
@property (nonatomic) unsigned int expectedTime;
@property (nonatomic) BOOL hasZilchPointIndex;
@property (nonatomic) int zilchPointIndex;
@property (readonly, nonatomic) BOOL hasTimeCheckpoints;
@property (retain, nonatomic) GEOTimeCheckpoints *timeCheckpoints;
@property (nonatomic) BOOL hasZilchPathIndex;
@property (nonatomic) unsigned int zilchPathIndex;
@property (readonly, nonatomic) BOOL hasEvInfo;
@property (retain, nonatomic) GEOStopStepEVInfo *evInfo;
@property (readonly, nonatomic) BOOL hasEvStateInfo;
@property (retain, nonatomic) GEOEVStateInfo *evStateInfo;
@property (nonatomic) BOOL hasDistanceCm;
@property (nonatomic) unsigned int distanceCm;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
