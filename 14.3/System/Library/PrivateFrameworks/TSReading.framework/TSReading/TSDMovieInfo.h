@class TSPData, NSURL, TSDMediaStyle;

@interface TSDMovieInfo : TSDMediaInfo <TSDMixing> {
    TSPData *mMovieData;
    NSURL *mMovieRemoteURL;
    TSPData *mImportedAuxiliaryMovieData;
    TSPData *mAudioOnlyImageData;
    double mStartTime;
    double mEndTime;
    double mPosterTime;
    struct CGSize { double width; double height; } mNaturalSize;
    unsigned long long mLoopOption;
    float mVolume;
    int mControlStyle;
    BOOL mAllowsAirPlayVideo;
    BOOL mUsesAirPlayVideoWhileAirPlayScreenIsActive;
    NSURL *mURLForMPMPC;
    TSDMediaStyle *mStyle;
    BOOL mAudioOnly;
}

@property (retain, nonatomic) TSPData *movieData;
@property (retain, nonatomic) NSURL *movieRemoteURL;
@property (retain, nonatomic) TSPData *importedAuxiliaryMovieData;
@property (retain, nonatomic) TSPData *audioOnlyImageData;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double posterTime;
@property (retain, nonatomic) TSPData *posterImageData;
@property (nonatomic) unsigned long long loopOption;
@property (nonatomic) float volume;
@property (nonatomic, getter=isAudioOnly) BOOL audioOnly;
@property (nonatomic, getter=isStreaming) BOOL streaming;
@property (nonatomic) BOOL allowsAirPlayVideo;
@property (nonatomic) BOOL usesAirPlayVideoWhileAirPlayScreenIsActive;
@property (retain, nonatomic) NSURL *urlForMPMPC;
@property (nonatomic) int controlStyle;

+ (id)presetKinds;
+ (double)defaultPosterTimeForDuration:(double)a0;

- (id)objectForProperty:(int)a0;
- (id)mediaFileType;
- (void)dealloc;
- (id)style;
- (id)copyWithContext:(id)a0;
- (void)setStyle:(id)a0;
- (Class)repClass;
- (Class)layoutClass;
- (void)acceptVisitor:(id)a0;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (float)floatValueForProperty:(int)a0;
- (BOOL)containsProperty:(int)a0;
- (int)intValueForProperty:(int)a0;
- (double)doubleValueForProperty:(int)a0;
- (id)presetKind;
- (BOOL)supportsAttachedComments;
- (Class)editorClass;
- (BOOL)supportsHyperlinks;
- (BOOL)canChangeWrapType;
- (id)animationFilters;
- (long long)mixingTypeWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2;
- (Class)styleClass;
- (id)mediaDisplayName;
- (struct CGSize { double x0; double x1; })rawDataSize;
- (void)p_setPropertiesFromLoadedAsset:(id)a0;
- (id)copyWithContext:(id)a0 stylesheet:(id)a1;
- (id)makeAVAssetWithOptions:(id)a0;
- (id)makeAVAsset;
- (id)makePosterImageGeneratorWithAVAsset:(id)a0;
- (id)generateEmptyPosterImageForContext:(id)a0;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 movieData:(id)a3 loadedAsset:(id)a4;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 movieRemoteURL:(id)a3 loadedAsset:(id)a4;
- (id)synchronouslyGenerateDefaultPosterImageForContext:(id)a0;

@end
