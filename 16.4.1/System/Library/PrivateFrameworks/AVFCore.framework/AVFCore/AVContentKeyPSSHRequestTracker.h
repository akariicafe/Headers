@class NSMutableArray;

@interface AVContentKeyPSSHRequestTracker : NSObject {
    long long _totalExpectedRequestCount;
    NSMutableArray *_requests;
}

- (void)addRequest:(id)a0;
- (void)dealloc;
- (id)requests;
- (BOOL)haveAllRequestsBeenReceived;
- (id)initWithRequestCount:(long long)a0;

@end
