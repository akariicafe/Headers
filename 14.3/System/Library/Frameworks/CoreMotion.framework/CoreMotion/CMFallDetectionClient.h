@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, CMFallDetectionClientXPC;

@interface CMFallDetectionClient : NSObject <CMFallDetectionClientXPC>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (weak, nonatomic) id<CMFallDetectionClientXPC> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reconnect;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)appDidFinishProcessingEventWithDuration:(double)a0;
- (void)appDidRequestFallDetectionPrompt;
- (void)didHideFallDetectionPrompt;
- (void)didStartBackgroundSession;
- (void)_invalidateInternal;
- (void)invalidate;
- (void)_setupConnection;

@end
