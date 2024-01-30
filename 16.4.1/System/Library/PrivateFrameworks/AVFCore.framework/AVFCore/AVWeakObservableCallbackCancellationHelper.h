@class NSMutableArray;

@interface AVWeakObservableCallbackCancellationHelper : NSObject {
    NSMutableArray *_callbackRegistrations;
}

- (void)cancelAllCallbacks;
- (void)dealloc;
- (void)addCallbackToCancel:(id)a0;
- (id)init;

@end
