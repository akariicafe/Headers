@class NSArray, AVFragmentedAssetInternal;

@interface AVFragmentedAsset : AVURLAsset <AVFragmentMinding> {
    AVFragmentedAssetInternal *_fragmentedAsset;
}

@property (readonly, nonatomic) NSArray *tracks;
@property (readonly, nonatomic, getter=isAssociatedWithFragmentMinder) BOOL associatedWithFragmentMinder;

+ (id)fragmentedAssetWithURL:(id)a0 options:(id)a1;
+ (BOOL)expectsPropertyRevisedNotifications;

- (void)_setIsAssociatedWithFragmentMinder:(BOOL)a0;
- (id)trackWithTrackID:(int)a0;
- (BOOL)_mindsFragments;
- (id)tracksWithMediaType:(id)a0;
- (id)tracksWithMediaCharacteristic:(id)a0;
- (Class)_classForAssetTracks;
- (id)initWithURL:(id)a0 options:(id)a1;

@end
