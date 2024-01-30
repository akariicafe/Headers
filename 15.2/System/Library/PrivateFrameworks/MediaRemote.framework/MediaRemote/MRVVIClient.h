@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MRVVIClient : NSObject {
    NSMutableDictionary *_deviceIDToCallbackMap;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setRecordingStateCallback:(id /* block */)a0 forDeviceID:(unsigned int)a1;
- (void)_recordingStateChangedNotification:(id)a0;

@end
