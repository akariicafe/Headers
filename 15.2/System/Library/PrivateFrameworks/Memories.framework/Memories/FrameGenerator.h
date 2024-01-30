@class NSMutableDictionary, VideoMovie, AVAssetImageGenerator, NSLock;

@interface FrameGenerator : NSObject {
    AVAssetImageGenerator *m_imageGenerator;
    NSMutableDictionary *m_fetchNotificationList;
    NSLock *m_fetchLock;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } m_timeToleranceBefore;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } m_timeToleranceAfter;
    BOOL m_requestedTimeTolerance;
    BOOL m_cropImage;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_cropRect;
}

@property (retain, nonatomic) VideoMovie *movie;
@property (nonatomic) struct CGSize { double width; double height; } maximumSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly, nonatomic) BOOL isQueueEmpty;
@property (nonatomic) BOOL disablePosterFrame;
@property (nonatomic) float rotation;
@property (readonly, nonatomic) long long maximumCacheSize;

+ (void)pauseFetching;
+ (void)resumeFetching;
+ (void)noteApplicationDidReceiveMemoryWarning;
+ (void)nukeCaches;
+ (id)cachedFrameForMovie:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 nearby:(BOOL)a2 actualTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a3 size:(struct CGSize { double x0; double x1; })a4 withRotation:(double)a5;
+ (id)posterCacheKeyForMovie:(id)a0;
+ (id)posterCacheDirectory;
+ (void)ensureCacheDirectoryExists;
+ (void)setupCaches;
+ (id)posterFrameForMovie:(id)a0;
+ (id)imageKeyForTime:(int)a0 size:(struct CGSize { double x0; double x1; })a1 withRotation:(float)a2;
+ (void)queueOne:(id)a0 times:(id)a1 completionHandler:(id /* block */)a2;
+ (void)queueNextItem;
+ (void)setCachedFrame:(id)a0 forMovie:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 canPoster:(BOOL)a3 size:(struct CGSize { double x0; double x1; })a4 withRotation:(double)a5 maximumCacheSize:(long long)a6;
+ (void)queueGenerator:(id)a0 forTimes:(id)a1 highPriority:(BOOL)a2 completionBlock:(id /* block */)a3;
+ (void)removeQueueEntriesForGenerator:(id)a0;
+ (void)changeTimesToHighPriority:(id)a0 forGenerator:(id)a1;
+ (BOOL)isAnythingFetching;
+ (void)logAllQueuedTimes;

- (id)imageGenerator;
- (void)clearImageGenerator;
- (id)applyRotation:(id)a0;
- (void)dealloc;
- (void)cropImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithMovie:(id)a0 maximumCacheSize:(long long)a1;
- (id)imageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)imageFrom:(struct CGImage { } *)a0;
- (id)applyCrop:(id)a0;
- (void)requestedTimeTolerance:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 after:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)fetchTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 highPriority:(BOOL)a1 resultBlock:(id /* block */)a2;
- (void)cancelAllFetching;
- (void)cancelFetchingOutsideActiveSegment:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 until:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 maxRequestInFlight:(long long)a2;
- (BOOL)isFetching:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)logQueuedTimes;
- (BOOL)fetchTimeInQueue:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)changeTimesToHighPriority:(id)a0;

@end
