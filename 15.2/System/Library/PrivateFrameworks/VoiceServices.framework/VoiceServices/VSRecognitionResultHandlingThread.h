@class NSMutableArray, NSConditionLock;
@protocol VSRecognitionResultHandlingThreadDelegate;

@interface VSRecognitionResultHandlingThread : NSObject {
    id<VSRecognitionResultHandlingThreadDelegate> _delegate;
    NSMutableArray *_requests;
    NSConditionLock *_lock;
    struct { unsigned char running : 1; unsigned char delegateDidHandleResults : 1; unsigned char valid : 1; } _resultHandlingFlags;
}

- (void)setDelegate:(id)a0;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)handleResults:(id)a0 withHandler:(id)a1;
- (void)_handleRequests;
- (void)_notifyRequestHandled:(id)a0;

@end
