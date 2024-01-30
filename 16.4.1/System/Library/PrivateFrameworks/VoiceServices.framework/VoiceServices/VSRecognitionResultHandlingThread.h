@class NSMutableArray, NSConditionLock;
@protocol VSRecognitionResultHandlingThreadDelegate;

@interface VSRecognitionResultHandlingThread : NSObject {
    id<VSRecognitionResultHandlingThreadDelegate> _delegate;
    NSMutableArray *_requests;
    NSConditionLock *_lock;
    struct { unsigned char running : 1; unsigned char delegateDidHandleResults : 1; unsigned char valid : 1; } _resultHandlingFlags;
}

- (void)setDelegate:(id)a0;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)_handleRequests;
- (void)_notifyRequestHandled:(id)a0;
- (void)handleResults:(id)a0 withHandler:(id)a1;

@end
