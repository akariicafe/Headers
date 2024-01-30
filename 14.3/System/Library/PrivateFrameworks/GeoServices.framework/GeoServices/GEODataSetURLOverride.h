@class NSString, PBDataReader, PBUnknownFields;

@interface GEODataSetURLOverride : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_addressCorrectionInitURL;
    NSString *_addressCorrectionUpdateURL;
    NSString *_announcementsURL;
    NSString *_batchReverseGeocoderURL;
    NSString *_businessPortalBaseURL;
    NSString *_directionsURL;
    NSString *_dispatcherURL;
    NSString *_etaURL;
    NSString *_logMessageUsageURL;
    NSString *_problemCategoriesURL;
    NSString *_problemOptInURL;
    NSString *_problemStatusURL;
    NSString *_problemSubmissionURL;
    NSString *_simpleETAURL;
    NSString *_spatialLookupURL;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _dataSet;
    struct { unsigned char has_dataSet : 1; unsigned char read_unknownFields : 1; unsigned char read_addressCorrectionInitURL : 1; unsigned char read_addressCorrectionUpdateURL : 1; unsigned char read_announcementsURL : 1; unsigned char read_batchReverseGeocoderURL : 1; unsigned char read_businessPortalBaseURL : 1; unsigned char read_directionsURL : 1; unsigned char read_dispatcherURL : 1; unsigned char read_etaURL : 1; unsigned char read_logMessageUsageURL : 1; unsigned char read_problemCategoriesURL : 1; unsigned char read_problemOptInURL : 1; unsigned char read_problemStatusURL : 1; unsigned char read_problemSubmissionURL : 1; unsigned char read_simpleETAURL : 1; unsigned char read_spatialLookupURL : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasDataSet;
@property (nonatomic) unsigned int dataSet;
@property (readonly, nonatomic) BOOL hasDirectionsURL;
@property (retain, nonatomic) NSString *directionsURL;
@property (readonly, nonatomic) BOOL hasEtaURL;
@property (retain, nonatomic) NSString *etaURL;
@property (readonly, nonatomic) BOOL hasBatchReverseGeocoderURL;
@property (retain, nonatomic) NSString *batchReverseGeocoderURL;
@property (readonly, nonatomic) BOOL hasSimpleETAURL;
@property (retain, nonatomic) NSString *simpleETAURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionInitURL;
@property (retain, nonatomic) NSString *addressCorrectionInitURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionUpdateURL;
@property (retain, nonatomic) NSString *addressCorrectionUpdateURL;
@property (readonly, nonatomic) BOOL hasProblemSubmissionURL;
@property (retain, nonatomic) NSString *problemSubmissionURL;
@property (readonly, nonatomic) BOOL hasProblemStatusURL;
@property (retain, nonatomic) NSString *problemStatusURL;
@property (readonly, nonatomic) BOOL hasProblemCategoriesURL;
@property (retain, nonatomic) NSString *problemCategoriesURL;
@property (readonly, nonatomic) BOOL hasAnnouncementsURL;
@property (retain, nonatomic) NSString *announcementsURL;
@property (readonly, nonatomic) BOOL hasDispatcherURL;
@property (retain, nonatomic) NSString *dispatcherURL;
@property (readonly, nonatomic) BOOL hasProblemOptInURL;
@property (retain, nonatomic) NSString *problemOptInURL;
@property (readonly, nonatomic) BOOL hasBusinessPortalBaseURL;
@property (retain, nonatomic) NSString *businessPortalBaseURL;
@property (readonly, nonatomic) BOOL hasLogMessageUsageURL;
@property (retain, nonatomic) NSString *logMessageUsageURL;
@property (readonly, nonatomic) BOOL hasSpatialLookupURL;
@property (retain, nonatomic) NSString *spatialLookupURL;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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

@end
