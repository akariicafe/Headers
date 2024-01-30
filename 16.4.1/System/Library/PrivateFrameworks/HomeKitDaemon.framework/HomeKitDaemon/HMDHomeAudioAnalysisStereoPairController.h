@class NSMutableDictionary;

@interface HMDHomeAudioAnalysisStereoPairController : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_audioAnalysisStereoPairDetectedEventsMap;
}

- (id)init;
- (void).cxx_destruct;
- (void)compareOrUpdateRecentAudioAnalysisStereoPairEvent:(id)a0 key:(id)a1 state:(unsigned long long)a2 notificationUUID:(id)a3 window:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)updateAudioAnalysisStereoPairDetectedEvent:(id)a0 key:(id)a1 state:(unsigned long long)a2 notificationUUID:(id)a3 completion:(id /* block */)a4;

@end
