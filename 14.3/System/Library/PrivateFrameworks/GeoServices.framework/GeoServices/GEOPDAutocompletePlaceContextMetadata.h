@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDAutocompletePlaceContextMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _clientizationFeatures;
    NSMutableArray *_alternateSearchableNames;
    NSString *_matchedDisplayNameLanguageCode;
    NSString *_matchedDisplayName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _distanceDisplayThreshold;
    BOOL _enableLookInsideActionForVenuePois;
    BOOL _isDefaultName;
    BOOL _isLookAroundActionAllowed;
    BOOL _isProminentResult;
    BOOL _shouldSuppressDirectionsAction;
    struct { unsigned char has_distanceDisplayThreshold : 1; unsigned char has_enableLookInsideActionForVenuePois : 1; unsigned char has_isDefaultName : 1; unsigned char has_isLookAroundActionAllowed : 1; unsigned char has_isProminentResult : 1; unsigned char has_shouldSuppressDirectionsAction : 1; unsigned char read_unknownFields : 1; unsigned char read_clientizationFeatures : 1; unsigned char read_alternateSearchableNames : 1; unsigned char read_matchedDisplayNameLanguageCode : 1; unsigned char read_matchedDisplayName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMatchedDisplayName;
@property (retain, nonatomic) NSString *matchedDisplayName;
@property (nonatomic) BOOL hasIsDefaultName;
@property (nonatomic) BOOL isDefaultName;
@property (nonatomic) BOOL hasIsProminentResult;
@property (nonatomic) BOOL isProminentResult;
@property (readonly, nonatomic) unsigned long long clientizationFeaturesCount;
@property (readonly, nonatomic) int *clientizationFeatures;
@property (readonly, nonatomic) BOOL hasMatchedDisplayNameLanguageCode;
@property (retain, nonatomic) NSString *matchedDisplayNameLanguageCode;
@property (nonatomic) BOOL hasShouldSuppressDirectionsAction;
@property (nonatomic) BOOL shouldSuppressDirectionsAction;
@property (nonatomic) BOOL hasIsLookAroundActionAllowed;
@property (nonatomic) BOOL isLookAroundActionAllowed;
@property (retain, nonatomic) NSMutableArray *alternateSearchableNames;
@property (nonatomic) BOOL hasDistanceDisplayThreshold;
@property (nonatomic) unsigned int distanceDisplayThreshold;
@property (nonatomic) BOOL hasEnableLookInsideActionForVenuePois;
@property (nonatomic) BOOL enableLookInsideActionForVenuePois;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)alternateSearchableNameType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)addClientizationFeature:(int)a0;
- (void)clearClientizationFeatures;
- (int)clientizationFeatureAtIndex:(unsigned long long)a0;
- (void)setClientizationFeatures:(int *)a0 count:(unsigned long long)a1;
- (id)clientizationFeaturesAsString:(int)a0;
- (int)StringAsClientizationFeatures:(id)a0;
- (void)dealloc;
- (id)alternateSearchableNameAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addAlternateSearchableName:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)alternateSearchableNamesCount;
- (id)initWithDictionary:(id)a0;
- (void)clearAlternateSearchableNames;

@end
