@class NSString, HMHome, HMRoom;

@interface HUDashboardContext : NSObject

@property (readonly, nonatomic) unsigned long long dashboardType;
@property (nonatomic) BOOL allowsAdding;
@property (nonatomic) BOOL allowsAnnounce;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL shouldHideHeadline;
@property (nonatomic) BOOL shouldHideStatus;
@property (nonatomic) BOOL shouldHideStatusBanner;
@property (nonatomic) BOOL shouldHideCameras;
@property (nonatomic) BOOL shouldIncludeRoomInAccessoryNames;
@property (nonatomic) BOOL onlyShowsFavorites;
@property (nonatomic) BOOL shouldHidePlaceholderButtons;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMRoom *room;

+ (id)na_identity;
+ (id)roomDashboardForRoom:(id)a0;
+ (id)favoritesDashboardForHome:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)shouldHideHomeKitObject:(id)a0;
- (BOOL)shouldHideHomeKitObject:(id)a0 limitedByServiceTypes:(id)a1;
- (id)initWithType:(unsigned long long)a0 home:(id)a1 room:(id)a2;
- (BOOL)_hasOnlySensorServices:(id)a0;
- (BOOL)_shouldHideService:(id)a0 limitedByServiceTypes:(id)a1;
- (BOOL)_shouldHideServiceGroup:(id)a0 limitedByServiceTypes:(id)a1;
- (BOOL)_shouldHideAccessory:(id)a0 limitedByServiceTypes:(id)a1;
- (BOOL)_shouldHideMediaProfileContainer:(id)a0;

@end
