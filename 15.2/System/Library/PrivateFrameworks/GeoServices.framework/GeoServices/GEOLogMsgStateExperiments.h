@class PBDataReader, GEOPDDatasetABStatus, GEOAbAssignInfo, GEOABExperimentAssignment, GEOABClientConfig;

@interface GEOLogMsgStateExperiments : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOAbAssignInfo *_abAssignInfo;
    GEOABClientConfig *_clientAbExperimentAssignment;
    GEOPDDatasetABStatus *_datasetAbStatus;
    GEOABExperimentAssignment *_tilesAbExperimentAssignment;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_abAssignInfo : 1; unsigned char read_clientAbExperimentAssignment : 1; unsigned char read_datasetAbStatus : 1; unsigned char read_tilesAbExperimentAssignment : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTilesAbExperimentAssignment;
@property (retain, nonatomic) GEOABExperimentAssignment *tilesAbExperimentAssignment;
@property (readonly, nonatomic) BOOL hasClientAbExperimentAssignment;
@property (retain, nonatomic) GEOABClientConfig *clientAbExperimentAssignment;
@property (readonly, nonatomic) BOOL hasDatasetAbStatus;
@property (retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property (readonly, nonatomic) BOOL hasAbAssignInfo;
@property (retain, nonatomic) GEOAbAssignInfo *abAssignInfo;

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
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
