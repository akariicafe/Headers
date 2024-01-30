@class NSMutableDictionary, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface ISPlayerItemChef : NSObject

@property (class, readonly, nonatomic) ISPlayerItemChef *defaultChef;

@property (readonly, nonatomic) NSOperationQueue *_operationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_isolationQueue;
@property (readonly, nonatomic) NSMutableDictionary *_operationsByRequestID;
@property (nonatomic, setter=_setCurrentRequestID:) long long _currentRequestID;

- (id)init;
- (void).cxx_destruct;
- (void)cancelPreparationOfIrisAssetWithRequestID:(long long)a0;
- (long long)prepareIrisPlayerItemWithAsset:(id)a0 trimmedTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 includeVideo:(BOOL)a3 includeAudio:(BOOL)a4 completion:(id /* block */)a5;
- (long long)prepareIrisVideoWithAsset:(id)a0 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 trimmedTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 completion:(id /* block */)a3;

@end
