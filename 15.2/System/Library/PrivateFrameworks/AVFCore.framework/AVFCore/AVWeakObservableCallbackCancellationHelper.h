@class NSMutableArray;

@interface AVWeakObservableCallbackCancellationHelper : NSObject {
    NSMutableArray *_callbackRegistrations;
}

- (void)addCallbackToCancel:(id)a0;
- (void)cancelAllCallbacks;
- (id)init;
- (void)dealloc;

@end
