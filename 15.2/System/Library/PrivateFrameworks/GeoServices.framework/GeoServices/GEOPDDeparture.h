@class PBDataReader, NSString, GEOFormattedString, NSDate, PBUnknownFields;
@protocol GEOServerFormattedString;

@interface GEOPDDeparture : PBCodable <GEOTransitDeparture, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _absDepartureTime;
    double _absLiveDepartureTime;
    NSString *_displayNameOverride;
    GEOFormattedString *_realTimeStatus;
    unsigned long long _referenceTripId;
    NSString *_vehicleNumber;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _realTimeStatusInfo;
    BOOL _isCanceled;
    struct { unsigned char has_absDepartureTime : 1; unsigned char has_absLiveDepartureTime : 1; unsigned char has_referenceTripId : 1; unsigned char has_realTimeStatusInfo : 1; unsigned char has_isCanceled : 1; unsigned char read_unknownFields : 1; unsigned char read_displayNameOverride : 1; unsigned char read_realTimeStatus : 1; unsigned char read_vehicleNumber : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSDate *departureDate;
@property (readonly, nonatomic) NSDate *scheduledDepartureDate;
@property (readonly, nonatomic) NSString *vehicleIdentifier;
@property (readonly, nonatomic) unsigned long long tripIdentifier;
@property (readonly, nonatomic) NSDate *liveDepartureDate;
@property (readonly, nonatomic) long long liveStatus;
@property (readonly, nonatomic) id<GEOServerFormattedString> liveStatusString;
@property (readonly, nonatomic) BOOL isPastDeparture;
@property (readonly, nonatomic) BOOL isCanceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasAbsDepartureTime;
@property (nonatomic) double absDepartureTime;
@property (readonly, nonatomic) BOOL hasVehicleNumber;
@property (retain, nonatomic) NSString *vehicleNumber;
@property (nonatomic) BOOL hasAbsLiveDepartureTime;
@property (nonatomic) double absLiveDepartureTime;
@property (nonatomic) BOOL hasIsCanceled;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) BOOL hasReferenceTripId;
@property (nonatomic) unsigned long long referenceTripId;
@property (readonly, nonatomic) BOOL hasRealTimeStatus;
@property (retain, nonatomic) GEOFormattedString *realTimeStatus;
@property (nonatomic) BOOL hasRealTimeStatusInfo;
@property (nonatomic) int realTimeStatusInfo;
@property (readonly, nonatomic) BOOL hasDisplayNameOverride;
@property (retain, nonatomic) NSString *displayNameOverride;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isPastDepartureRelativeToDate:(id)a0 usingGracePeriod:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (id)realTimeStatusInfoAsString:(int)a0;
- (int)StringAsRealTimeStatusInfo:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)dictionaryRepresentation;

@end
