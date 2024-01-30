@class NSString, WPClient, NSData, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface BTBluetoothPairingSession : NSObject {
    char _btAddrStr[32];
    BOOL _btConfigured;
    BOOL _btConnecting;
    struct BTDeviceImpl { } *_btDevice;
    BOOL _btDisconnected;
    struct BTPairingAgentImpl { } *_btPairingAgent;
    BOOL _btPairingAgentStarted;
    struct BTSessionImpl { } *_btSession;
    BOOL _btSessionAddedServiceCallback;
    BOOL _btSessionAttaching;
    BOOL _btStarted;
    BOOL _invalidateCalled;
    unsigned int _retryCount;
    BOOL _retryOnDetach;
    NSObject<OS_dispatch_source> *_retryTimer;
    double _startTime;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_os_transaction> *_transaction;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    WPClient *_wpClient;
}

@property (nonatomic) BOOL aggregate;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL connectOnly;
@property (copy, nonatomic) NSString *deviceAddress;
@property (readonly, nonatomic) unsigned int deviceVersion;
@property (nonatomic) BOOL disconnectOnly;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *guestAddress;
@property (copy, nonatomic) NSData *guestKey;
@property (nonatomic) BOOL guestMode;
@property (nonatomic) BOOL guestPermanent;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL softwareVolume;
@property (nonatomic) BOOL userNotInContacts;

- (void)_btEnsureStopped;
- (void)_btDeletePairingAndRetry;
- (id)init;
- (void).cxx_destruct;
- (void)_completed:(int)a0;
- (void)dealloc;
- (void)_activate;
- (void)activate;
- (void)_invalidate;
- (void)invalidate;
- (int)_btEnsureStarted;

@end
