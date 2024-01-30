@class NSString, MPMediaPickerConfiguration;
@protocol MPMediaPickerControllerDelegate, MPMediaPickerRemoteViewLoader;

@interface MPMediaPickerController : UIViewController <MPMusicMediaPickerClientController> {
    MPMediaPickerConfiguration *_configuration;
}

@property (retain, nonatomic) id<MPMediaPickerRemoteViewLoader> loader;
@property (readonly, nonatomic) unsigned long long mediaTypes;
@property (weak, nonatomic) id<MPMediaPickerControllerDelegate> delegate;
@property (nonatomic) BOOL allowsPickingMultipleItems;
@property (nonatomic) BOOL showsCloudItems;
@property (nonatomic) BOOL showsItemsWithProtectedAssets;
@property (copy, nonatomic) NSString *prompt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preheatMediaPicker;

- (id)typeIdentifiers;
- (long long)modalPresentationStyle;
- (long long)selectionMode;
- (void)viewDidLoad;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewWillAppear:(BOOL)a0;
- (id)configuration;
- (void)_sharedInit;
- (BOOL)_canShowWhileLocked;
- (void)willMoveToParentViewController:(id)a0;
- (void)_pickerDidCancel;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithCoder:(id)a0;
- (void)_forceDismissal;
- (BOOL)picksSingleCollectionEntity;
- (unsigned int)watchCompatibilityVersion;
- (BOOL)showsCatalogContent;
- (BOOL)showsLibraryContent;
- (BOOL)supportsUnavailableContent;
- (BOOL)pickingForExternalPlayer;
- (id)playbackArchiveConfiguration;
- (void)_addRemoteView;
- (void)setShowsCatalogContent:(BOOL)a0;
- (void)setShowsLibraryContent:(BOOL)a0;
- (void)setSupportsUnavailableContent:(BOOL)a0;
- (void)setPicksSingleCollectionEntity:(BOOL)a0;
- (void)setWatchCompatibilityVersion:(unsigned int)a0;
- (void)setPickingForExternalPlayer:(BOOL)a0;
- (void)setPlaybackArchiveConfiguration:(id)a0;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:(id)a0;
- (void)remoteMediaPickerDidPickPlaybackArchive:(id)a0;
- (id)initWithMediaTypes:(unsigned long long)a0;
- (id)initWithSupportedTypeIdentifiers:(id)a0 selectionMode:(long long)a1;
- (void)_pickerDidPickItems:(id)a0;
- (void)_pickerDidPickPlaybackArchive:(id)a0;
- (BOOL)_hasAddedRemoteView;
- (void)_resetRemoteViewController;
- (void)_synchronizeSettings;
- (void)_checkLibraryAuthorization;
- (void)viewDidAppear:(BOOL)a0;
- (long long)_preferredModalPresentationStyle;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
