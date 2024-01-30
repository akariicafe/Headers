@class NSMutableArray;

@interface AVWeakObservableCallbackCancellationHelper : NSObject {
    NSMutableArray *_callbackRegistrations;
}

- (id)init;
- (void)dealloc;
- (void)cancelAllCallbacks;
- (void)addCallbackToCancel:(id)a0;

@end
