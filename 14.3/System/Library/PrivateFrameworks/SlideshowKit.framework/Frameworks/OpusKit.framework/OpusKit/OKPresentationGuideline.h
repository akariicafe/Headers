@class OKProducerPlugin, NSString, OKPresentationCanvas, OKPresentation, OKMediaItem;

@interface OKPresentationGuideline : NSObject <NSCopying> {
    NSString *_mediaItemUniqueURLString;
    unsigned long long _presentationCanvasType;
    NSString *_presentationCanvasKeyPath;
    NSString *_producerPluginUUID;
}

@property (nonatomic) OKPresentation *presentation;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) double timestamp;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) OKMediaItem *mediaItem;
@property (retain, nonatomic) OKProducerPlugin *producerPlugin;
@property (retain, nonatomic) OKPresentationCanvas *presentationCanvas;

+ (id)guidelineAuthoringTransitionSettings:(id)a0;
+ (id)guidelineAuthoringDefaultMobileRecommendedResolutionSizes;
+ (id)guidelineAuthoringTitle:(id)a0;
+ (id)guidelineAuthoringRecommendedResolutionSizes:(id)a0;
+ (id)guidelineLiveAuthoringEnabled:(BOOL)a0;
+ (id)guidelineWithType:(unsigned long long)a0 key:(id)a1 value:(id)a2;
+ (id)defaultMobileRecommendedResolutionSizes;
+ (id)globalUniqueKeyForKey:(id)a0;
+ (id)globalUniqueKeyForKey:(id)a0 mediaItem:(id)a1;
+ (id)globalUniqueKeyForKey:(id)a0 presentationCanvas:(id)a1;
+ (id)globalUniqueKeyForKey:(id)a0 producerPlugin:(id)a1;
+ (id)globalUniqueKeyForKey:(id)a0 mediaItem:(id)a1 presentationCanvas:(id)a2 producerPlugin:(id)a3;
+ (id)guidelineAuthoringRandomSeed:(unsigned long long)a0;
+ (id)guidelineAuthoringSynopsis:(id)a0;
+ (id)guidelineAuthoringAudioURLs:(id)a0;
+ (id)guidelineAuthoringAttributedTitle:(id)a0;
+ (id)guidelineAuthoringInteractiveTransitionSettings:(id)a0;
+ (id)guidelineAuthoringMediaAttributes:(id)a0;
+ (id)guidelineAuthoringPageDuration:(double)a0;
+ (id)guidelineAuthoringCurrentPageDuration:(double)a0;
+ (id)guidelineAuthoringTotalDuration:(double)a0;
+ (id)guidelineAuthoringDurationFactor:(double)a0;
+ (id)guidelineAuthoringMinimumDuration:(double)a0;
+ (id)guidelineAuthoringMaximumDuration:(double)a0;
+ (id)guidelineAuthoringFitToAudioDuration:(BOOL)a0;
+ (id)guidelineAuthoringDebuggingEnabled:(BOOL)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionary;
- (void)dealloc;
- (id)initWithType:(unsigned long long)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithType:(unsigned long long)a0 key:(id)a1 value:(id)a2;
- (id)presentationCanvasKeyPath;
- (id)globalUniqueKey;

@end
