@class NSString, APSConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKPushTokenFetcher : NSObject <APSConnectionDelegate> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSMutableArray *_completionHandlers;
    APSConnection *_pushConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_invokeCompletionWithPushToken:(id)a0;
- (void)fetchPushTokenWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void)_handleTimeout;
- (void)dealloc;

@end
