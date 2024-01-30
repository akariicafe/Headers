@class NSArray, NSDictionary, AVCompositionInternal;

@interface AVComposition : AVAsset <NSSecureCoding, NSMutableCopying> {
    AVCompositionInternal *_priv;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *tracks;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly, copy, nonatomic) NSDictionary *URLAssetInitializationOptions;

+ (void)initialize;
+ (BOOL)expectsPropertyRevisedNotifications;

- (Class)_classForTrackInspectors;
- (id)_assetInspectorLoader;
- (id)tracksWithMediaType:(id)a0;
- (id)trackWithTrackID:(int)a0;
- (id)_assetInspector;
- (struct OpaqueFigAsset { } *)_figAsset;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (id)_mutableTracks;
- (id)_mediaSelectionGroupDictionaries;
- (id)tracksWithMediaCharacteristic:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (struct OpaqueFigMutableComposition { } *)_mutableComposition;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (id)_initWithComposition:(id)a0;
- (int)_createEmptyMutableCompositionIfNeeded;
- (id)_newTrackForIndex:(long long)a0;
- (void)_loadAssetInspectorAndLoaderOnce;
- (BOOL)_clientProvidesNaturalSize;
- (BOOL)_setURLAssetInitializationOptions:(id)a0 error:(id *)a1;
- (void)dealloc;

@end
