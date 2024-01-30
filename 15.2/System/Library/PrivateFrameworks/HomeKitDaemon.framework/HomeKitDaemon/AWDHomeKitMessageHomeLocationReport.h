@class NSMutableArray, AWDHomeKitMessageLocation;

@interface AWDHomeKitMessageHomeLocationReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char numIterationToConverge : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *rawLocations;
@property (readonly, nonatomic) BOOL hasSelectedHomeLocation;
@property (retain, nonatomic) AWDHomeKitMessageLocation *selectedHomeLocation;
@property (nonatomic) BOOL hasNumIterationToConverge;
@property (nonatomic) unsigned int numIterationToConverge;
@property (readonly, nonatomic) BOOL hasNearestLOI;
@property (retain, nonatomic) AWDHomeKitMessageLocation *nearestLOI;

+ (Class)rawLocationsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addRawLocations:(id)a0;
- (void)clearRawLocations;
- (unsigned long long)rawLocationsCount;
- (id)rawLocationsAtIndex:(unsigned long long)a0;

@end
