@class AVAssetWriterInputPassDescription, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetWriterInputPassDescriptionResponder : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _stoppedResponding;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    BOOL _hasRespondedAtLeastOnce;
    AVAssetWriterInputPassDescription *_mostRecentPassDescription;
    id /* block */ _callbackBlock;
}

- (id)init;
- (void)dealloc;
- (id)initWithCallbackQueue:(id)a0 block:(id /* block */)a1;
- (void)respondToNewPassDescription:(id)a0;
- (void)stopRespondingToPassDescriptions;
- (BOOL)_hasStoppedResponding;
- (void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;

@end
