@class NSString, CSOpportuneSpeakListener, NSObject;
@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakListnerTestService : NSObject <CSOpportuneSpeakListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    CSOpportuneSpeakListener *listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)opportuneSpeakListener:(id)a0 hasVADAvailable:(BOOL)a1;
- (void)opportuneSpeakListener:(id)a0 hasRemoteVADAvailable:(BOOL)a1;
- (void)receiveOpportuneSpeakListenerStart;
- (id)init;
- (void)start;
- (void)receiveOpportuneSpeakListenerStop;
- (void).cxx_destruct;
- (void)opportuneSpeakListener:(id)a0 didStopUnexpectly:(BOOL)a1;

@end
