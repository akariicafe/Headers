@class NSSet, NSString, NAFuture, NSDictionary, UIImage;
@protocol HUMediaPickerDelegate;

@interface HUMediaSourceItem : HFItem <MPMediaPickerControllerDelegatePrivate, SSUSoundscapesPickerControllerDelegate>

@property (readonly) NSSet *mediaProfileContainers;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL continuousPicker;
@property (retain, nonatomic) NSString *name;
@property (readonly) NAFuture *iconFuture;
@property (retain, nonatomic) NSDictionary *resolveError;
@property (readonly) NAFuture *resolveFuture;
@property (readonly, nonatomic) UIImage *iconImage;
@property (weak) id<HUMediaPickerDelegate> delegate;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) BOOL failed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_musicAppUninstallResolveError;
+ (id)_musicCatalogPlaybackDisabledResolveErrorFor:(unsigned long long)a0;
+ (id)_storeKitErrorResolveErrorFor:(id)a0;
+ (id)appleMusicSource;
+ (id)soundScapesSource;

- (void).cxx_destruct;
- (id)pickerViewController;
- (void)mediaPicker:(id)a0 didPickPlaybackArchive:(id)a1;
- (void)mediaPickerDidCancel:(id)a0;
- (id)_appIconFuture;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)a0;
- (id)_setupAppleMusicPicker;
- (id)_setupSoundScapesPicker;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)_updateAppleMusicSubscriptionStatusForMediaProfiles:(id)a0 forTarget:(unsigned long long)a1;
- (id)initWithBundleIdentifier:(id)a0 forServiceName:(id)a1;
- (void)mediaPickerCancelled;
- (void)mediaPickerDidSelectPlaybackArchive:(id)a0 withError:(id)a1;
- (id)resolveForMediaProfiles:(id)a0 forTarget:(unsigned long long)a1;

@end
