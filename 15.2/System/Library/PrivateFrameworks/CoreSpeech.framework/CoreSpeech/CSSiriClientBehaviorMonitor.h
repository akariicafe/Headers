@class NSHashTable, CSAudioRecordContext, NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriClientBehaviorMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL isStreaming;
@property (retain, nonatomic) CSAudioRecordContext *audioRecordContext;

+ (id)sharedInstance;

- (void)registerObserver:(id)a0;
- (void)notifyDidStopStream:(id)a0 withEventUUID:(id)a1;
- (void)notifyFetchedAudioStreamWithRequest:(id)a0 audioProviderUUID:(id)a1 successfully:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)notifyDidStartStreamWithContext:(id)a0 successfully:(BOOL)a1 option:(id)a2 withEventUUID:(id)a3;
- (void)unregisterObserver:(id)a0;
- (void)notifyWillStartStreamWithContext:(id)a0 option:(id)a1;
- (void)notifyPreparedAudioStreamWithRequest:(id)a0 audioProviderUUID:(id)a1 successfully:(BOOL)a2;
- (void)notifyWillStopStream:(id)a0 reason:(unsigned long long)a1;
- (void)notifyReleaseAudioSession;

@end
