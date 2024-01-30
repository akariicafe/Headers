@class NSString, AFNotifyObserver, NSObject;
@protocol OS_dispatch_queue, AFBluetoothWirelessSplitterSessionStateObserverDelegate;

@interface AFBluetoothWirelessSplitterSessionStateObserver : NSObject <AFNotifyObserverDelegate, AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    id<AFBluetoothWirelessSplitterSessionStateObserverDelegate> _delegate;
    AFNotifyObserver *_notifyObserver;
}

@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getStateWithCompletion:(id /* block */)a0;
- (void)_setState:(long long)a0;
- (void)_invalidate;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)notifyObserver:(id)a0 didReceiveNotificationWithToken:(int)a1;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)invalidate;
- (void)dealloc;

@end
