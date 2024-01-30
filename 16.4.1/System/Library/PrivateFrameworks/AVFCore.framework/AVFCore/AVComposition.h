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
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)tracksWithMediaType:(id)a0;
- (id)tracksWithMediaCharacteristic:(id)a0;
- (Class)_classForTrackInspectors;
- (id)initWithCoder:(id)a0;
- (id)_mediaSelectionGroupDictionaries;
- (void)dealloc;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (id)_mutableTracks;
- (id)init;
- (id)description;
- (id)trackWithTrackID:(int)a0;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (BOOL)_clientProvidesNaturalSize;
- (int)_createEmptyMutableCompositionIfNeeded;
- (id)_initWithComposition:(id)a0;
- (void)_loadAssetInspectorAndLoaderOnce;
- (struct OpaqueFigMutableComposition { } *)_mutableComposition;
- (id)_newTrackForIndex:(long long)a0;
- (void)_setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_setURLAssetInitializationOptions:(id)a0 error:(id *)a1;

@end
