@class NSString, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventRideBookedSession : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_intentResponseFailures;
    NSString *_rideAppId;
    NSString *_rideAppVersion;
    NSString *_rideBookedSessionId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _statusIssue;
    BOOL _bookedUsingMaps;
    BOOL _cancelled;
    BOOL _contactedDriver;
    BOOL _invalidVehicleLocation;
    BOOL _missingVehicleLocation;
    BOOL _tappedProactiveTrayItem;
    BOOL _viewedDetails;
    BOOL _viewedInProactiveTray;
    struct { unsigned char has_statusIssue : 1; unsigned char has_bookedUsingMaps : 1; unsigned char has_cancelled : 1; unsigned char has_contactedDriver : 1; unsigned char has_invalidVehicleLocation : 1; unsigned char has_missingVehicleLocation : 1; unsigned char has_tappedProactiveTrayItem : 1; unsigned char has_viewedDetails : 1; unsigned char has_viewedInProactiveTray : 1; unsigned char read_intentResponseFailures : 1; unsigned char read_rideAppId : 1; unsigned char read_rideAppVersion : 1; unsigned char read_rideBookedSessionId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasBookedUsingMaps;
@property (nonatomic) BOOL bookedUsingMaps;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL hasContactedDriver;
@property (nonatomic) BOOL contactedDriver;
@property (nonatomic) BOOL hasViewedInProactiveTray;
@property (nonatomic) BOOL viewedInProactiveTray;
@property (nonatomic) BOOL hasTappedProactiveTrayItem;
@property (nonatomic) BOOL tappedProactiveTrayItem;
@property (nonatomic) BOOL hasViewedDetails;
@property (nonatomic) BOOL viewedDetails;
@property (readonly, nonatomic) BOOL hasRideAppId;
@property (retain, nonatomic) NSString *rideAppId;
@property (readonly, nonatomic) BOOL hasRideBookedSessionId;
@property (retain, nonatomic) NSString *rideBookedSessionId;
@property (readonly, nonatomic) BOOL hasRideAppVersion;
@property (retain, nonatomic) NSString *rideAppVersion;
@property (nonatomic) BOOL hasInvalidVehicleLocation;
@property (nonatomic) BOOL invalidVehicleLocation;
@property (nonatomic) BOOL hasMissingVehicleLocation;
@property (nonatomic) BOOL missingVehicleLocation;
@property (nonatomic) BOOL hasStatusIssue;
@property (nonatomic) int statusIssue;
@property (retain, nonatomic) NSMutableArray *intentResponseFailures;

+ (BOOL)isValid:(id)a0;
+ (Class)intentResponseFailureType;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsStatusIssue:(id)a0;
- (void)addIntentResponseFailure:(id)a0;
- (void)clearIntentResponseFailures;
- (id)intentResponseFailureAtIndex:(unsigned long long)a0;
- (unsigned long long)intentResponseFailuresCount;
- (id)statusIssueAsString:(int)a0;

@end
