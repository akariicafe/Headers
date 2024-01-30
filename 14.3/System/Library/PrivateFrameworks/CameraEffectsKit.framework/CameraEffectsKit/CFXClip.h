@class JFXMediaReaderCreationAVAssetTrackAttributes, NSString, JFXMediaItem, NSURL, NSData, NSMutableArray, PVTransformAnimation;

@interface CFXClip : NSObject <NSCopying, JFXPlayableElement>

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) JFXMediaItem *mediaItem;
@property (retain, nonatomic) NSMutableArray *filters;
@property (retain, nonatomic) NSMutableArray *overlays;
@property (retain, nonatomic) NSMutableArray *animojis;
@property (readonly, nonatomic) int presentationTime;
@property (nonatomic) int duration;
@property (readonly, nonatomic) int mediaStartOffset;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) long long mediaInterfaceOrientationForDisplay;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } mediaSize;
@property (retain, nonatomic) NSURL *metadataURL;
@property (retain, nonatomic) NSData *originalAnimojiDataRepresentation;
@property (nonatomic) unsigned long long originalAnimojiVersionNumber;
@property (retain, nonatomic) PVTransformAnimation *transformAnimation;
@property (nonatomic) int transformInitialStartOffset;
@property (readonly, nonatomic) BOOL isAssetUnavailable;
@property (readonly, nonatomic) BOOL isAssetLoaded;
@property (readonly, nonatomic) BOOL isStill;
@property (readonly, nonatomic) BOOL isVideo;
@property (readonly, nonatomic) BOOL shouldRenderVideoAsBlack;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } playableMediaSizeWithTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) JFXMediaReaderCreationAVAssetTrackAttributes *depthDataReaderAssetTrackAttributes;
@property (readonly, nonatomic) JFXMediaReaderCreationAVAssetTrackAttributes *arMetadataReaderAssetTrackAttributes;

+ (id)defaultClip;
+ (BOOL)cfx_writeProxyImageToURL:(id)a0 fromImageAtURL:(id)a1 maximumImageDimension:(unsigned long long)a2 outColorSpace:(id *)a3;
+ (void)cfx_createVideoClipWithLocalURL:(id)a0 effectStack:(id)a1 completionHandler:(id /* block */)a2;
+ (void)cfx_createStillClipPreviewWithLocalURL:(id)a0 maximumImageDimension:(unsigned long long)a1 effectStack:(id)a2 completionHandler:(id /* block */)a3;
+ (void)createClipWithLocalURL:(id)a0 effectStack:(id)a1 isVideo:(BOOL)a2 maximumImageDimension:(unsigned long long)a3 completionHandler:(id /* block */)a4;
+ (id)createCaptureClip;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setPresentationTime:(int)a0;
- (void)dealloc;
- (id)initWithMediaItem:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)removeAllEffects;
- (id)effectStack;
- (BOOL)removeAllEffectsOfType:(int)a0;
- (id)effectsOfType:(int)a0;
- (void)addEffect:(id)a0;
- (BOOL)hasPlayableEffectOfType:(int)a0;
- (id)playableEffectsOfType:(int)a0;
- (id)playableEffectStack;
- (id)stringForMediaType:(long long)a0;
- (id)cfx_clipType;
- (void)addEffectStack:(id)a0;
- (BOOL)cfx_isAssetMissing;
- (BOOL)cfx_isAssetInTrash;
- (void)updateTransformPresentationTimeRange;
- (void)cfx_addEffect:(id)a0;
- (BOOL)cfx_removeAllEffectsOfType:(int)a0;
- (id)cfx_effectsOfType:(int)a0;
- (id)CFX_removeStyleTranferOnUnsupportedDevice:(id)a0;
- (id)effectStackExcludingType:(int)a0;
- (BOOL)hasMetadataAsset;
- (id)playableEffectStackExcludingType:(int)a0;
- (void)removeEffect:(id)a0;

@end
