@class AVWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface AVSampleBufferGeneratorInternal : NSObject {
    struct OpaqueFigSampleGenerator { } *figSampleGenerator;
    AVWeakReference *weakReferenceToAsset;
    struct OpaqueCMTimebase { } *timebase;
    NSObject<OS_dispatch_queue> *batchGenerationQueue;
    NSObject<OS_dispatch_queue> *batchCallbackQueue;
}

@end
