@class MPCAssistantSendCommand, NSMutableDictionary, MPCAssistantEndpointContext, NSObject, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface MPCAssistantCommand : NSObject {
    MPCAssistantSendCommand *_sendCommand;
    MPCAssistantEndpointContext *_context;
    NSObject<OS_dispatch_queue> *_sendCommandQueue;
    NSMutableDictionary *_analytics;
    NSObject<OS_dispatch_queue> *_analyticsQueue;
    NSObject<OS_dispatch_group> *_analyticsGroup;
    NSDate *_startDate;
}

- (id)init;
- (void).cxx_destruct;
- (void)sendCommand:(unsigned int)a0 toDestination:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)_setAnalyticsKey:(id)a0 value:(id)a1;
- (void)_setAnalyticsError:(id)a0;
- (void)sendPlaybackQueue:(id)a0 toDestination:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)_findOutputDevicesForDestination:(id)a0 completion:(id /* block */)a1;
- (void)sendPlaybackQueue:(id)a0 toDestination:(id)a1 completion:(id /* block */)a2;
- (void)sendPlaybackArchive:(id)a0 toDestination:(id)a1 completion:(id /* block */)a2;

@end
