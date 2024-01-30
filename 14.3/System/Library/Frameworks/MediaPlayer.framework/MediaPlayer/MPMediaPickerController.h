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

+ (void)load;
+ (void)preheatMediaPicker;

- (void)willMoveToParentViewController:(id)a0;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)typeIdentifiers;
- (void)_sharedInit;
- (long long)selectionMode;
- (void).cxx_destruct;
- (id)configuration;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (long long)modalPresentationStyle;
- (BOOL)showsCatalogContent;
- (void)setShowsCatalogContent:(BOOL)a0;
- (BOOL)showsLibraryContent;
- (void)setShowsLibraryContent:(BOOL)a0;
- (BOOL)supportsUnavailableContent;
- (void)setSupportsUnavailableContent:(BOOL)a0;
- (void)_addRemoteView;
- (BOOL)picksSingleCollectionEntity;
- (void)setPicksSingleCollectionEntity:(BOOL)a0;
- (unsigned int)watchCompatibilityVersion;
- (void)setWatchCompatibilityVersion:(unsigned int)a0;
- (BOOL)pickingForExternalPlayer;
- (void)setPickingForExternalPlayer:(BOOL)a0;
- (id)playbackArchiveConfiguration;
- (void)setPlaybackArchiveConfiguration:(id)a0;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:(id)a0;
- (void)remoteMediaPickerDidPickPlaybackArchive:(id)a0;
- (id)initWithMediaTypes:(unsigned long long)a0;
- (void)_forceDismissal;
- (void)_pickerDidPickItems:(id)a0;
- (id)initWithSupportedTypeIdentifiers:(id)a0 selectionMode:(long long)a1;
- (void)_pickerDidPickPlaybackArchive:(id)a0;
- (BOOL)_hasAddedRemoteView;
- (void)_resetRemoteViewController;
- (void)_synchronizeSettings;
- (void)_checkLibraryAuthorization;
- (unsigned long long)_mediaPickerController_supportedInterfaceOrientations;
- (unsigned long long)_keynote_supportedInterfaceOrientations;
- (long long)_mediaPickerController_preferredInterfaceOrientationForPresentation;
- (long long)_keynote_preferredInterfaceOrientationForPresentation;
- (void)viewWillAppear:(BOOL)a0;
- (long long)_preferredModalPresentationStyle;
- (void)viewDidAppear:(BOOL)a0;
- (void)_pickerDidCancel;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
