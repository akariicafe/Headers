@class AVAsset, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface IrisSampleInfo : NSObject

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSArray *timeRanges;
@property (retain, nonatomic) NSArray *gapTimeRanges;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } dominantSampleDuration;

+ (void)initialize;
+ (void)clearCache;
+ (id)infoForAsset:(id)a0;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;
- (void)loadInfoWithCompletionHandler:(id /* block */)a0;
- (void)loadInfoWithTrackOutput:(id)a0 completionHandler:(id /* block */)a1;

@end
