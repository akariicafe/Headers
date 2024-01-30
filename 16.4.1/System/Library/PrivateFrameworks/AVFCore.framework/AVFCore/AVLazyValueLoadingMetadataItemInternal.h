@class NSString, AVMetadataItemValueRequest, NSError, NSMutableArray, NSObject;
@protocol NSObject, OS_dispatch_queue, NSCopying;

@interface AVLazyValueLoadingMetadataItemInternal : NSObject {
    id<NSObject, NSCopying> value;
    NSString *dataType;
    AVMetadataItemValueRequest *valueRequest;
    id /* block */ valueLoadingHandler;
    long long valueStatus;
    NSError *valueLoadingError;
    NSMutableArray *loadingCompletionHandlers;
    NSObject<OS_dispatch_queue> *readWriteQueue;
}

@end
