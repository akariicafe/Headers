@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MRVVIClient : NSObject {
    NSMutableDictionary *_deviceIDToCallbackMap;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedClient;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_recordingStateChangedNotification:(id)a0;
- (void)setRecordingStateCallback:(id /* block */)a0 forDeviceID:(unsigned int)a1;

@end
