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

- (void)cameraPreviewWellImageDidChange;
- (BOOL)_userHasPhotosFromLastYear;
- (id)_shortcutSystemImageNamed:(id)a0;
- (void).cxx_destruct;
- (id)_buildOneYearAgoQuickAction;
- (id)_buildFavoritesQuickAction;
- (id)initWithDatabaseContext:(id)a0;
- (id)_buildSearchQuickAction;
- (void)buildQuickActionItems;
- (id)_buildMostRecentPhotoQuickAction;
- (BOOL)_userHasPhotos;
- (void)dealloc;

@end
