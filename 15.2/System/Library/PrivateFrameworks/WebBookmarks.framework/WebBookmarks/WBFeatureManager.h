@interface WBFeatureManager : NSObject

@property (readonly, nonatomic) long long accessLevel;
@property (readonly, nonatomic, getter=isOfflineReadingListAvailable) BOOL offlineReadingListAvailable;
@property (readonly, nonatomic) BOOL favoritesFolderSelectionShouldSync;

+ (id)sharedFeatureManager;

- (id)init;
- (void)_updateToAccessLevel:(long long)a0;

@end
