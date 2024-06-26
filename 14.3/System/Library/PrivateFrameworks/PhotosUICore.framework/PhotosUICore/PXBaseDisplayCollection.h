@class NSString;

@interface PXBaseDisplayCollection : NSObject <PXDisplayCollection>

@property (readonly, nonatomic) BOOL canContainAssets;
@property (readonly, nonatomic) BOOL canContainCollections;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL px_allowsImplicitSelectionForProjectOrSharingAction;
@property (readonly, nonatomic) BOOL px_canRearrangeContent;
@property (readonly, nonatomic) BOOL px_canAddContent;
@property (readonly, nonatomic) BOOL px_isUserCreated;
@property (readonly, nonatomic) BOOL px_isRegularAlbum;
@property (readonly, nonatomic) BOOL px_isStandInAlbum;
@property (readonly, nonatomic) BOOL px_isImportedAlbum;
@property (readonly, nonatomic) BOOL px_isMyPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL px_isUserSmartAlbum;
@property (readonly, nonatomic) BOOL px_isSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRootSmartAlbum;
@property (readonly, nonatomic) BOOL px_isMediaTypeSmartAlbum;
@property (readonly, nonatomic) BOOL px_isAllPhotosSmartAlbum;
@property (readonly, nonatomic) BOOL px_isFavoritesSmartAlbum;
@property (readonly, nonatomic) BOOL px_isPlacesSmartAlbum;
@property (readonly, nonatomic) BOOL px_isHiddenSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRecentlyAddedSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRecentlyDeletedSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRecentsSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRecentlyEditedSmartAlbum;
@property (readonly, nonatomic) BOOL px_isScreenRecordingsSmartAlbum;
@property (readonly, nonatomic) BOOL px_isPanoramasSmartAlbum;
@property (readonly, nonatomic) BOOL px_isMoment;
@property (readonly, nonatomic) BOOL px_isHighlight;
@property (readonly, nonatomic) BOOL px_isSuggestion;
@property (readonly, nonatomic) BOOL px_isSharedAlbum;
@property (readonly, nonatomic) BOOL px_isOwnedSharedAlbum;
@property (readonly, nonatomic) BOOL px_isCloudMultipleContributorsEnabled;
@property (readonly, nonatomic) BOOL px_isInReadWriteCloudLibrary;
@property (readonly, nonatomic) BOOL px_isFolder;
@property (readonly, nonatomic) BOOL px_isRegularFolder;
@property (readonly, nonatomic) BOOL px_isSmartFolder;
@property (readonly, nonatomic) BOOL px_isFavoriteMemoriesSmartFolder;
@property (readonly, nonatomic) BOOL px_isTopLevelFolder;
@property (readonly, nonatomic) BOOL px_isSharedAlbumsFolder;
@property (readonly, nonatomic) BOOL px_isSharedAlbumsAndActivityFolder;
@property (readonly, nonatomic) BOOL px_isMediaTypesFolder;
@property (readonly, nonatomic) BOOL px_isProjectsFolder;
@property (readonly, nonatomic) BOOL px_isMacSyncedAlbum;
@property (readonly, nonatomic) BOOL px_isMacSyncedEventsFolder;
@property (readonly, nonatomic) BOOL px_isMacSyncedFacesFolder;
@property (readonly, nonatomic) BOOL px_isProject;
@property (readonly, nonatomic) BOOL px_isPhotosVirtualCollection;
@property (readonly, nonatomic) BOOL px_isMomentsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isMemoriesVirtualCollection;
@property (readonly, nonatomic) BOOL px_isForYouVirtualCollection;
@property (readonly, nonatomic) BOOL px_isPeopleVirtualCollection;
@property (readonly, nonatomic) BOOL px_isSharedActivityVirtualCollection;
@property (readonly, nonatomic) BOOL px_isTransientPlacesCollection;
@property (readonly, nonatomic) BOOL px_isImportHistoryCollection;
@property (readonly, nonatomic) BOOL px_isMyAlbumsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isSharedAlbumsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isImportSessionCollection;
@property (readonly, nonatomic) id px_cheapLogIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
