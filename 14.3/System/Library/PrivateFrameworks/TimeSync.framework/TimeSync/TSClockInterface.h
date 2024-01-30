@class TSClock, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TSClockInterface : NSObject <TSClockClient> {
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    void /* function */ *_lockStateCallback;
    void *_lockStateRefcon;
    void /* function */ *_masterChangeCallback;
    void *_masterChangeRefcon;
    void /* function */ *_gptpGrandmasterCallback;
    void *_gptpGrandmasterRefcon;
    void /* function */ *_gptpGrandmasterPortCallback;
    void *_gptpGrandmasterPortRefcon;
    void /* function */ *_gptpLocalPortCallback;
    void *_gptpLocalPortRefcon;
}

@property (retain, nonatomic) TSClock *clock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setgPTPGrandmasterIDAndPortNotificationCallback:(void /* function */ *)a0 refcon:(void *)a1;
- (void)didChangeLocalPortWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1 forClock:(id)a2;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1 forClock:(id)a2;
- (void).cxx_destruct;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (void)setgPTPLocalPortNotificationCallback:(void /* function */ *)a0 refcon:(void *)a1;
- (void)didChangeClockMasterForClock:(id)a0;
- (void)setMasterChangeNotificationCallback:(void /* function */ *)a0 refcon:(void *)a1;
- (void)didChangeLockStateTo:(int)a0 forClock:(id)a1;
- (void)setLockStateNotificationCallback:(void /* function */ *)a0 refcon:(void *)a1;
- (void)didEndClockGrandmasterChangeForClock:(id)a0;
- (void)setgPTPGrandmasterNotificationCallback:(void /* function */ *)a0 refcon:(void *)a1;

@end
