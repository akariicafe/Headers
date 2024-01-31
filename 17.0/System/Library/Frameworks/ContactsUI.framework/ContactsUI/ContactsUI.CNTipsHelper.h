@class _TtC10ContactsUI12CNTipsHelper;

@interface ContactsUI.CNTipsHelper : NSObject {
    void /* unknown type, empty encoding */ entries;
    void /* unknown type, empty encoding */ startupTask;
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ lock;
}

@property (class, nonatomic, readonly) _TtC10ContactsUI12CNTipsHelper *shared;

@property (nonatomic, retain) void /* unknown type, empty encoding */ currentTipView;

- (id)init;
- (void).cxx_destruct;
- (void)tipKitStopObservation;
- (void)tipKitSetSiriTipContext:(id)a0;
- (void)tipKitStartObservation:(id)a0;

@end
