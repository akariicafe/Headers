@class GEOMapsNearbyWidget, GEOMapsTransitWidget, GEOMapsDestinationsWidget, PBDataReader;

@interface GEOLogMsgEventMapsWidgetsInteractionSession : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOMapsDestinationsWidget *_mapsDestinationsWidget;
    GEOMapsNearbyWidget *_mapsNearbyWidget;
    GEOMapsTransitWidget *_mapsTransitWidget;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _duration;
    int _endState;
    int _localDayOfWeek;
    int _localHour;
    int _mapsWidgetType;
    BOOL _lockedMode;
    struct { unsigned char has_duration : 1; unsigned char has_endState : 1; unsigned char has_localDayOfWeek : 1; unsigned char has_localHour : 1; unsigned char has_mapsWidgetType : 1; unsigned char has_lockedMode : 1; unsigned char read_mapsDestinationsWidget : 1; unsigned char read_mapsNearbyWidget : 1; unsigned char read_mapsTransitWidget : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasMapsWidgetType;
@property (nonatomic) int mapsWidgetType;
@property (nonatomic) BOOL hasEndState;
@property (nonatomic) int endState;
@property (readonly, nonatomic) BOOL hasMapsDestinationsWidget;
@property (retain, nonatomic) GEOMapsDestinationsWidget *mapsDestinationsWidget;
@property (readonly, nonatomic) BOOL hasMapsTransitWidget;
@property (retain, nonatomic) GEOMapsTransitWidget *mapsTransitWidget;
@property (readonly, nonatomic) BOOL hasMapsNearbyWidget;
@property (retain, nonatomic) GEOMapsNearbyWidget *mapsNearbyWidget;
@property (nonatomic) BOOL hasLockedMode;
@property (nonatomic) BOOL lockedMode;
@property (nonatomic) BOOL hasLocalHour;
@property (nonatomic) int localHour;
@property (nonatomic) BOOL hasLocalDayOfWeek;
@property (nonatomic) int localDayOfWeek;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) int duration;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)mapsWidgetTypeAsString:(int)a0;
- (int)StringAsMapsWidgetType:(id)a0;
- (id)endStateAsString:(int)a0;
- (int)StringAsEndState:(id)a0;
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
- (id)initWithDictionary:(id)a0;

@end
