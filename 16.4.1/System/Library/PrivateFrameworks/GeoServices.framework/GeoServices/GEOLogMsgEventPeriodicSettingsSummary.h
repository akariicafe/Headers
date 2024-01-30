@class GEOLogMsgStateDeviceSettings, GEOLogMsgStateMapsUserSettings, GEOLogMsgStateDeviceConnection, GEOLogMsgStateMapUIShown, PBDataReader, GEOLogMsgStateMapsFeatures, GEOLogMsgStateAccount, GEOLogMsgStateRoutingSettings, GEOLogMsgStateMapSettings;

@interface GEOLogMsgEventPeriodicSettingsSummary : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOLogMsgStateAccount *_account;
    GEOLogMsgStateDeviceConnection *_deviceConnection;
    GEOLogMsgStateDeviceSettings *_deviceSettings;
    GEOLogMsgStateMapSettings *_mapSettings;
    GEOLogMsgStateMapUIShown *_mapUiShown;
    GEOLogMsgStateMapsFeatures *_mapsFeatures;
    GEOLogMsgStateMapsUserSettings *_mapsUserSettings;
    GEOLogMsgStateRoutingSettings *_routingSettings;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _electricVehicleCount;
    unsigned int _favoritesCount;
    unsigned int _licensePlateCount;
    unsigned int _personalCollectionsCount;
    BOOL _homeFavoriteSet;
    BOOL _learnFromAppEnabled;
    BOOL _notificationsEnabled;
    BOOL _siriSuggestionsEnabled;
    BOOL _workFavoriteSet;
    struct { unsigned char has_electricVehicleCount : 1; unsigned char has_favoritesCount : 1; unsigned char has_licensePlateCount : 1; unsigned char has_personalCollectionsCount : 1; unsigned char has_homeFavoriteSet : 1; unsigned char has_learnFromAppEnabled : 1; unsigned char has_notificationsEnabled : 1; unsigned char has_siriSuggestionsEnabled : 1; unsigned char has_workFavoriteSet : 1; unsigned char read_account : 1; unsigned char read_deviceConnection : 1; unsigned char read_deviceSettings : 1; unsigned char read_mapSettings : 1; unsigned char read_mapUiShown : 1; unsigned char read_mapsFeatures : 1; unsigned char read_mapsUserSettings : 1; unsigned char read_routingSettings : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMapSettings;
@property (retain, nonatomic) GEOLogMsgStateMapSettings *mapSettings;
@property (readonly, nonatomic) BOOL hasMapUiShown;
@property (retain, nonatomic) GEOLogMsgStateMapUIShown *mapUiShown;
@property (nonatomic) BOOL hasNotificationsEnabled;
@property (nonatomic) BOOL notificationsEnabled;
@property (nonatomic) BOOL hasHomeFavoriteSet;
@property (nonatomic) BOOL homeFavoriteSet;
@property (nonatomic) BOOL hasWorkFavoriteSet;
@property (nonatomic) BOOL workFavoriteSet;
@property (nonatomic) BOOL hasFavoritesCount;
@property (nonatomic) unsigned int favoritesCount;
@property (nonatomic) BOOL hasPersonalCollectionsCount;
@property (nonatomic) unsigned int personalCollectionsCount;
@property (nonatomic) BOOL hasElectricVehicleCount;
@property (nonatomic) unsigned int electricVehicleCount;
@property (nonatomic) BOOL hasLicensePlateCount;
@property (nonatomic) unsigned int licensePlateCount;
@property (nonatomic) BOOL hasSiriSuggestionsEnabled;
@property (nonatomic) BOOL siriSuggestionsEnabled;
@property (nonatomic) BOOL hasLearnFromAppEnabled;
@property (nonatomic) BOOL learnFromAppEnabled;
@property (readonly, nonatomic) BOOL hasAccount;
@property (retain, nonatomic) GEOLogMsgStateAccount *account;
@property (readonly, nonatomic) BOOL hasDeviceConnection;
@property (retain, nonatomic) GEOLogMsgStateDeviceConnection *deviceConnection;
@property (readonly, nonatomic) BOOL hasMapsUserSettings;
@property (retain, nonatomic) GEOLogMsgStateMapsUserSettings *mapsUserSettings;
@property (readonly, nonatomic) BOOL hasRoutingSettings;
@property (retain, nonatomic) GEOLogMsgStateRoutingSettings *routingSettings;
@property (readonly, nonatomic) BOOL hasMapsFeatures;
@property (retain, nonatomic) GEOLogMsgStateMapsFeatures *mapsFeatures;
@property (readonly, nonatomic) BOOL hasDeviceSettings;
@property (retain, nonatomic) GEOLogMsgStateDeviceSettings *deviceSettings;

+ (BOOL)isValid:(id)a0;

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

@end
