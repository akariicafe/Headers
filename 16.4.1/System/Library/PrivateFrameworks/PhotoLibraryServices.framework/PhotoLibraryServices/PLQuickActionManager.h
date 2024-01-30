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

- (BOOL)_userHasPhotos;
- (id)_buildFavoritesQuickAction;
- (id)_buildMostRecentPhotoQuickAction;
- (void)dealloc;
- (BOOL)_userHasPhotosFromLastYear;
- (id)_buildSearchQuickAction;
- (void)cameraPreviewWellImageDidChange;
- (id)initWithDatabaseContext:(id)a0;
- (void)buildQuickActionItems;
- (id)_buildOneYearAgoQuickAction;
- (void).cxx_destruct;
- (id)_shortcutSystemImageNamed:(id)a0;

@end
