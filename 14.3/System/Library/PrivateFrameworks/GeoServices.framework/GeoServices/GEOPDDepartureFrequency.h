@class NSString, PBUnknownFields, NSDate;

@interface GEOPDDepartureFrequency : PBCodable <GEOTransitDepartureFrequency, NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _displayDepartureFrequency;
    unsigned int _earliestDepartureTime;
    unsigned int _latestDepartureTime;
    unsigned int _maxDepartureFrequency;
    unsigned int _minDepartureFrequency;
    BOOL _isEstimated;
    struct { unsigned char has_displayDepartureFrequency : 1; unsigned char has_earliestDepartureTime : 1; unsigned char has_latestDepartureTime : 1; unsigned char has_maxDepartureFrequency : 1; unsigned char has_minDepartureFrequency : 1; unsigned char has_isEstimated : 1; } _flags;
}

@property (readonly, nonatomic) NSDate *firstTimeInFrequency;
@property (readonly, nonatomic) NSDate *lastTimeInFrequency;
@property (readonly, nonatomic) double frequencyForSorting;
@property (readonly, nonatomic) long long frequencyType;
@property (readonly, nonatomic) BOOL isEstimate;
@property (readonly, nonatomic) long long displayFrequency;
@property (readonly, nonatomic) long long minFrequency;
@property (readonly, nonatomic) long long maxFrequency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasMinDepartureFrequency;
@property (nonatomic) unsigned int minDepartureFrequency;
@property (nonatomic) BOOL hasMaxDepartureFrequency;
@property (nonatomic) unsigned int maxDepartureFrequency;
@property (nonatomic) BOOL hasEarliestDepartureTime;
@property (nonatomic) unsigned int earliestDepartureTime;
@property (nonatomic) BOOL hasLatestDepartureTime;
@property (nonatomic) unsigned int latestDepartureTime;
@property (nonatomic) BOOL hasIsEstimated;
@property (nonatomic) BOOL isEstimated;
@property (nonatomic) BOOL hasDisplayDepartureFrequency;
@property (nonatomic) unsigned int displayDepartureFrequency;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (BOOL)isValidAtDate:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
