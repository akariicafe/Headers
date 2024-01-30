@class AVAsset, NSObject;
@protocol OS_dispatch_queue;

@interface _ISPlayerItemChefOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly, nonatomic) AVAsset *asset;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } trimmedTimeRange;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } photoTime;
@property (readonly, nonatomic) BOOL includeVideo;
@property (readonly, nonatomic) BOOL includeAudio;
@property (readonly, copy, nonatomic) id /* block */ resultHandler;

- (void)main;
- (void).cxx_destruct;
- (void)_handleValuesDidLoad;
- (void)_preparePlayerItem;
- (id)initWithAsset:(id)a0 trimmedTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 includeAudio:(BOOL)a3 includeVideo:(BOOL)a4 resultHandler:(id /* block */)a5;

@end
