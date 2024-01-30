@class NSString, NSDictionary, NSTimer, CALayer;
@protocol MicaPlayerDelegate;

@interface MicaPlayer : NSObject <NSCopying>

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) CALayer *rootLayer;
@property (retain, nonatomic) NSDictionary *publishedObjects;
@property (retain, nonatomic) NSTimer *playTimer;
@property (weak, nonatomic) id<MicaPlayerDelegate> delegate;
@property (nonatomic) double retinaScale;
@property (nonatomic) double documentDuration;
@property (readonly, nonatomic) BOOL isPlaying;
@property (nonatomic) double playbackTime;
@property (nonatomic) float preferredPlaybackSpeed;
@property (readonly, nonatomic) BOOL isPlaybackAtEnd;
@property (nonatomic) BOOL loopDuringPlayback;

+ (id)updatePublishedObjects:(id)a0 toReferenceLayersInTree:(id)a1 ratherThanLayersInTree:(id)a2;
+ (id)rootDictForPath:(id)a0;
+ (BOOL)boolFromDictionary:(id)a0 key:(id)a1 defaultValue:(BOOL)a2;

- (void)startPlayTimerIfNeeded;
- (void)stopPlayTimer;
- (void)runPlayTimer:(id)a0;
- (void)removeFromSuperlayer;
- (void)notifyDelegateDidStopPlaying;
- (id)initWithFileName:(id)a0 retinaScale:(double)a1;
- (void)pause;
- (void)addToLayer:(id)a0 onTop:(BOOL)a1 gravity:(id)a2;
- (id)initWithPath:(id)a0 retinaScale:(double)a1 rootLayer:(id)a2 publishedObjects:(id)a3;
- (id)publishedObjectWithKey:(id)a0 required:(BOOL)a1;
- (id)publishedLayerWithKey:(id)a0 required:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0 url:(id)a1 retinaScale:(double)a2;
- (void)dealloc;
- (void)moveAndResizeWithinParentLayer:(id)a0 usingGravity:(id)a1 animate:(BOOL)a2;
- (BOOL)isTimerNeeded;
- (void)notifyDelegateDidChangePlaybackTime;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0 retinaScale:(double)a1;
- (void)play;
- (void)notifyDelegateDidStartPlaying;

@end
