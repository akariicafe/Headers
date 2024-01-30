@class AVAsset, AVWeakReference, NSMutableSet, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetReaderInternal : NSObject {
    AVWeakReference *weakReference;
    AVAsset *asset;
    struct OpaqueFigAssetReader { } *figAssetReader;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
    BOOL readSingleSample;
    NSMutableArray *outputs;
    NSMutableSet *outputFinishedCallbackInvokers;
    long long status;
    NSError *error;
    NSError *errorThatOccurredBeforeStartReading;
    NSObject<OS_dispatch_queue> *statusReadWriteQueue;
}

@end
