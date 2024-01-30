@class NSObject, NSMapTable, _GCControllerManagerServer;
@protocol OS_dispatch_queue, GCUserDefaults;

@interface GCSyntheticDeviceManager : NSObject {
    _GCControllerManagerServer *_server;
    NSObject<OS_dispatch_queue> *_queue;
    struct IONotificationPort { } *_notifyPort;
    unsigned int _service;
    unsigned int _connect;
    unsigned long long _kernelClientGeneration;
    struct __CFDictionary { } *_3pSyntheticControllerMatchingCriteria;
    unsigned int _3pSyntheticControllerPublishedNotification;
    unsigned int _3pSyntheticControllerTerminatedNotification;
    unsigned long long _3pSyntheticControllerCount;
    id<GCUserDefaults> _defaults;
    BOOL _disabledByPreference;
    NSMapTable *_deviceSyntheticDescriptions;
}

- (id)initWithServer:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;

@end
