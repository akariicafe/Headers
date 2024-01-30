@class SBSApplicationShortcutService, NSData, NSOperationQueue, PLDatabaseContext;

@interface PLQuickActionManager : NSObject {
    id _cameraWellObserver;
    NSOperationQueue *_operationQueue;
    PLDatabaseContext *_databaseContext;
}

@property (retain, nonatomic, setter=_setCachedMostRecentPhotoData:) NSData *_cachedMostRecentPhotoData;
@property (nonatomic, setter=_setMostRecentPhotoIsInvalid:) BOOL _mostRecentPhotoIsInvalid;
@property (retain, nonatomic, setter=_setAppShortcutService:) SBSApplicationShortcutService *_appShortcutService;
@property (retain, nonatomic, setter=_setSBSApplicationShortcutServiceClass:) Class _SBSApplicationShortcutServiceClass;
@property (retain, nonatomic, setter=_setSBSApplicationShortcutItemClass:) Class _SBSApplicationShortcutItemClass;
@property (retain, nonatomic, setter=_setSBSApplicationShortcutCustomImageIconClass:) Class _SBSApplicationShortcutCustomImageIconClass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_shortcutSystemImageNamed:(id)a0;
- (BOOL)_userHasPhotos;
- (BOOL)_userHasPhotosFromLastYear;
- (id)_buildSearchQuickAction;
- (id)_buildOneYearAgoQuickAction;
- (id)initWithDatabaseContext:(id)a0;
- (void)buildQuickActionItems;
- (void)cameraPreviewWellImageDidChange;
- (id)_buildMostRecentPhotoQuickAction;
- (id)_buildFavoritesQuickAction;

@end
