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

- (void)_setupConnection;
- (void)reconnect;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_invalidateInternal;
- (void)appDidFinishProcessingEventWithDuration:(double)a0;
- (void)appDidRequestFallDetectionPrompt;
- (void)didHideFallDetectionPrompt;
- (void)didStartBackgroundSession;

@end
