@class PBUnknownFields, NSString, PBDataReader;

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
