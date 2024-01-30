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

- (struct OpaqueFigAsset { } *)_figAsset;
- (id)init;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (void)dealloc;
- (id)_mutableTracks;
- (int)_createEmptyMutableCompositionIfNeeded;
- (id)_initWithComposition:(id)a0;
- (void)_loadAssetInspectorAndLoaderOnce;
- (id)_newTrackForIndex:(long long)a0;
- (BOOL)_clientProvidesNaturalSize;
- (void)_setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_setURLAssetInitializationOptions:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (Class)_classForTrackInspectors;
- (id)trackWithTrackID:(int)a0;
- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (id)tracksWithMediaType:(id)a0;
- (struct OpaqueFigMutableComposition { } *)_mutableComposition;
- (id)tracksWithMediaCharacteristic:(id)a0;
- (id)_mediaSelectionGroupDictionaries;
- (void)encodeWithCoder:(id)a0;

@end
