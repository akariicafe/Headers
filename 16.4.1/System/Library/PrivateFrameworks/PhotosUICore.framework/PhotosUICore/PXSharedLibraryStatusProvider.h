@class NSString, PXSharedLibraryDataSourceManager;
@protocol PXSharedLibrary;

@interface PXSharedLibraryStatusProvider : PXObservable <PXMutableSharedLibraryStatusProvider, PXSectionedDataSourceManagerObserver, PXSettingsKeyObserver> {
    PXSharedLibraryDataSourceManager *_invitationsDataSourceManager;
    PXSharedLibraryDataSourceManager *_previewDataSourceManager;
    PXSharedLibraryDataSourceManager *_sharedLibraryDataSourceManager;
    PXSharedLibraryDataSourceManager *_exitingDataSourceManager;
}

@property (class, readonly, nonatomic) PXSharedLibraryStatusProvider *sharedInstance;

@property (readonly, nonatomic) BOOL hasPreview;
@property (readonly, nonatomic) BOOL hasSharedLibrary;
@property (readonly, nonatomic) BOOL hasSharedLibraryOrPreview;
@property (readonly, nonatomic) id<PXSharedLibrary> invitation;
@property (readonly, nonatomic) id<PXSharedLibrary> preview;
@property (readonly, nonatomic) id<PXSharedLibrary> sharedLibrary;
@property (readonly, nonatomic) id<PXSharedLibrary> exiting;
@property (readonly, nonatomic) id<PXSharedLibrary> sharedLibraryOrPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateSharedLibrary;
- (id)fetchExiting;
- (void)setHasSharedLibrary:(BOOL)a0;
- (void)setInvitation:(id)a0;
- (void)setHasPreview:(BOOL)a0;
- (void)_updateExiting;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)fetchSharedLibrary;
- (void)setExiting:(id)a0;
- (void)_configureExitingDataSourceManager;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_updatePreview;
- (void)setPreview:(id)a0;
- (void)_configureSharedLibraryDataSourceManager;
- (void)_configurePreviewDataSourceManager;
- (id)init;
- (void)_updateInvitation;
- (id)fetchPreview;
- (void)_configureInvitationDataSourceManager;
- (void)setSharedLibrary:(id)a0;
- (void).cxx_destruct;
- (id)_statusDescription;
- (void)fetchSharedLibraryForURL:(id)a0 completionHandler:(id /* block */)a1;

@end
