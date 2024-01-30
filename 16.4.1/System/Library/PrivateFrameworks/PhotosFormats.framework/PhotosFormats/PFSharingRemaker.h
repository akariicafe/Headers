@class NSArray, NSMutableDictionary, NSOperationQueue, NSError, NSObject, PFSharingRemakerOptions;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PFSharingRemaker : NSObject {
    NSObject<OS_dispatch_queue> *_remakerQueue;
    float _progress;
    NSMutableDictionary *_inProgressOperationByUUID;
    BOOL _remakerSuccess;
    BOOL _abortedRemaker;
    BOOL _cancelledRemaker;
    NSError *_remakerError;
    NSOperationQueue *_remakeOperationQueue;
    NSObject<OS_dispatch_source> *_progressTimer;
}

@property (retain, nonatomic, setter=_setOptions:) PFSharingRemakerOptions *_options;
@property (retain, nonatomic, setter=_setOperations:) NSArray *_operations;
@property (copy, nonatomic, setter=_setProgressHandler:) id /* block */ _progressHandler;
@property (copy, nonatomic, setter=_setCompletionHandler:) id /* block */ _completionHandler;

+ (id)remakerWithOperations:(id)a0 options:(id)a1;

- (void)_updateProgress;
- (id)init;
- (void).cxx_destruct;
- (void)cancelRemaking;
- (void)remakeWithProgressHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)_callProgressBlockWithProgress:(double)a0;
- (void)_abortWithUnderlyingOperationError:(id)a0;
- (void)_completeOperationWithUUID:(id)a0;
- (double)_computeProgress;
- (void)_configurePhotoOperation:(id)a0 withUUID:(id)a1 dispatchGroup:(id)a2;
- (void)_configureVideoOperation:(id)a0 withUUID:(id)a1 dispatchGroup:(id)a2;
- (void)_endSessionWithSuccess:(BOOL)a0 error:(id)a1;

@end
