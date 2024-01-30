@class PBUnknownFields, NSString, NSArray, GEOMapItemIdentifier, MSPTransitStorageArtwork, MSPTransitStorageSystem, GEOLatLng;
@protocol GEOTransitSystem, GEOTransitArtworkDataSource;

@interface MSPTransitStorageLine : PBCodable <GEOTransitLine, NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char muid : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) id<GEOTransitSystem> system;
@property (readonly, nonatomic) unsigned long long departureTimeDisplayStyle;
@property (readonly, nonatomic) BOOL departuresAreVehicleSpecific;
@property (readonly, nonatomic) BOOL isBus;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artwork;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> modeArtwork;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> alternateArtwork;
@property (readonly, nonatomic) BOOL hasLineColorString;
@property (readonly, nonatomic) NSString *lineColorString;
@property (readonly, nonatomic) BOOL showVehicleNumber;
@property (readonly, nonatomic) NSArray *operatingHours;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasLineColorString;
@property (retain, nonatomic) NSString *lineColorString;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *artwork;
@property (readonly, nonatomic) BOOL hasModeArtwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *modeArtwork;
@property (readonly, nonatomic) BOOL hasSystem;
@property (retain, nonatomic) MSPTransitStorageSystem *system;
@property (readonly, nonatomic) BOOL hasAlternateArtwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *alternateArtwork;
@property (readonly, nonatomic) BOOL hasLocationHint;
@property (retain, nonatomic) GEOLatLng *locationHint;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithLine:(id)a0;

@end
