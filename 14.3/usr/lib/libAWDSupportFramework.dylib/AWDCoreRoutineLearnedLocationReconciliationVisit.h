@class NSMutableArray;

@interface AWDCoreRoutineLearnedLocationReconciliationVisit : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char datapointCount : 1; unsigned char deviceClass : 1; unsigned char percentageTransitions : 1; unsigned char percentageVisits : 1; unsigned char placeLabelType : 1; unsigned char placeType : 1; unsigned char didUnlock : 1; unsigned char newPlace : 1; unsigned char placeAOIPOI : 1; unsigned char watchPresent : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDatapointCount;
@property (nonatomic) int datapointCount;
@property (nonatomic) BOOL hasDeviceClass;
@property (nonatomic) int deviceClass;
@property (nonatomic) BOOL hasWatchPresent;
@property (nonatomic) BOOL watchPresent;
@property (nonatomic) BOOL hasDidUnlock;
@property (nonatomic) BOOL didUnlock;
@property (nonatomic) BOOL hasNewPlace;
@property (nonatomic) BOOL newPlace;
@property (nonatomic) BOOL hasPlaceType;
@property (nonatomic) int placeType;
@property (nonatomic) BOOL hasPlaceLabelType;
@property (nonatomic) int placeLabelType;
@property (nonatomic) BOOL hasPlaceAOIPOI;
@property (nonatomic) BOOL placeAOIPOI;
@property (nonatomic) BOOL hasPercentageVisits;
@property (nonatomic) int percentageVisits;
@property (nonatomic) BOOL hasPercentageTransitions;
@property (nonatomic) int percentageTransitions;
@property (retain, nonatomic) NSMutableArray *alternativeVisits;

+ (Class)alternativeVisitsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addAlternativeVisits:(id)a0;
- (unsigned long long)alternativeVisitsCount;
- (void)clearAlternativeVisits;
- (id)alternativeVisitsAtIndex:(unsigned long long)a0;

@end
