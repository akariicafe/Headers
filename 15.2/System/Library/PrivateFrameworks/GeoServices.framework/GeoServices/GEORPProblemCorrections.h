@class NSString, GEORPDirectionsProblem, PBDataReader, GEORPMapLocation, GEORPCorrectedLabel, GEORPCorrectedCoordinate, GEORPCorrectedSearch, NSMutableArray, GEORPPlaceProblem, GEORPMerchantLookupCorrections;

@interface GEORPProblemCorrections : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_comments;
    GEORPCorrectedCoordinate *_correctedCoordinate;
    NSMutableArray *_correctedFields;
    NSMutableArray *_correctedFlags;
    GEORPCorrectedLabel *_correctedLabel;
    GEORPMapLocation *_correctedMapLocation;
    GEORPCorrectedSearch *_correctedSearch;
    GEORPDirectionsProblem *_directionsProblem;
    GEORPMerchantLookupCorrections *_merchantLookupCorrections;
    NSMutableArray *_photoWithMetadatas;
    GEORPPlaceProblem *_placeProblem;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _delayed;
    struct { unsigned char has_delayed : 1; unsigned char read_comments : 1; unsigned char read_correctedCoordinate : 1; unsigned char read_correctedFields : 1; unsigned char read_correctedFlags : 1; unsigned char read_correctedLabel : 1; unsigned char read_correctedMapLocation : 1; unsigned char read_correctedSearch : 1; unsigned char read_directionsProblem : 1; unsigned char read_merchantLookupCorrections : 1; unsigned char read_photoWithMetadatas : 1; unsigned char read_placeProblem : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *correctedFields;
@property (readonly, nonatomic) BOOL hasCorrectedLabel;
@property (retain, nonatomic) GEORPCorrectedLabel *correctedLabel;
@property (readonly, nonatomic) BOOL hasCorrectedCoordinate;
@property (retain, nonatomic) GEORPCorrectedCoordinate *correctedCoordinate;
@property (readonly, nonatomic) BOOL hasCorrectedSearch;
@property (retain, nonatomic) GEORPCorrectedSearch *correctedSearch;
@property (readonly, nonatomic) BOOL hasCorrectedMapLocation;
@property (retain, nonatomic) GEORPMapLocation *correctedMapLocation;
@property (readonly, nonatomic) BOOL hasComments;
@property (retain, nonatomic) NSString *comments;
@property (readonly, nonatomic) BOOL hasPlaceProblem;
@property (retain, nonatomic) GEORPPlaceProblem *placeProblem;
@property (readonly, nonatomic) BOOL hasDirectionsProblem;
@property (retain, nonatomic) GEORPDirectionsProblem *directionsProblem;
@property (retain, nonatomic) NSMutableArray *photoWithMetadatas;
@property (nonatomic) BOOL hasDelayed;
@property (nonatomic) BOOL delayed;
@property (retain, nonatomic) NSMutableArray *correctedFlags;
@property (readonly, nonatomic) BOOL hasMerchantLookupCorrections;
@property (retain, nonatomic) GEORPMerchantLookupCorrections *merchantLookupCorrections;

+ (BOOL)isValid:(id)a0;
+ (Class)correctedFieldType;
+ (Class)photoWithMetadataType;
+ (Class)correctedFlagType;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)addCorrectedField:(id)a0;
- (void)addPhotoWithMetadata:(id)a0;
- (void)addCorrectedFlag:(id)a0;
- (unsigned long long)correctedFieldsCount;
- (void)clearCorrectedFields;
- (id)correctedFieldAtIndex:(unsigned long long)a0;
- (unsigned long long)photoWithMetadatasCount;
- (void)clearPhotoWithMetadatas;
- (id)photoWithMetadataAtIndex:(unsigned long long)a0;
- (unsigned long long)correctedFlagsCount;
- (void)clearCorrectedFlags;
- (id)correctedFlagAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
