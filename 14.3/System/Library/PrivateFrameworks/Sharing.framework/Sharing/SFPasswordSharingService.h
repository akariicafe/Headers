@class NSDate, NSString, NSUUID, SFService, SFPasswordSharingInfo, NSObject, SFUserAlert;
@protocol SFPasswordSharingServiceDelegate, OS_dispatch_queue;

@interface SFPasswordSharingService : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    SFUserAlert *_notification;
    NSUUID *_peer;
    SFPasswordSharingInfo *_promptedInfo;
    SFService *_service;
    int _serviceState;
    NSDate *_shareClock;
    double _shareTime;
}

@property (weak, nonatomic) id<SFPasswordSharingServiceDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSString *networkName;

+ (unsigned int)passwordSharingAvailability;

- (void)_run;
- (id)init;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)dealloc;
- (void)activate;
- (BOOL)disabledViaConfig;
- (int)_runServiceStart;
- (void)_sendPasswordReceived;
- (void)_passInfoToDelegate:(id)a0;
- (void)_sendPasswordDeclinedWithError:(int)a0;
- (void)_handleReceivedPassword:(id)a0;
- (void)_handleUserNotificationResponse:(int)a0;
- (BOOL)__activateCalled;
- (void)_promptUserWithInfo:(id)a0 message:(id)a1;
- (id)messageForDisplayName:(id)a0 deviceName:(id)a1 info:(id)a2;
- (BOOL)__invalidateCalled;
- (void)__testReceivedObject:(id)a0 withFlags:(unsigned int)a1;
- (void)_receivedObject:(id)a0 flags:(unsigned int)a1;
- (void)_handleSessionStarted:(id)a0;
- (void)invalidate;

@end
