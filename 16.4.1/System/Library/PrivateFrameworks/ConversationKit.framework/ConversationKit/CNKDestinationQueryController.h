@interface CNKDestinationQueryController : NSObject <CNKDestinationQueryControllerProtocol> {
    void /* unknown type, empty encoding */ scheduleIDSQuerySubject;
    void /* unknown type, empty encoding */ scheduleIDSQueryGroupSubject;
    void /* unknown type, empty encoding */ scheduleIDSCachedQuerySubject;
    void /* unknown type, empty encoding */ scheduleIDSQueryDebouncer;
    void /* unknown type, empty encoding */ scheduleIDSQueryGroupDebouncer;
    void /* unknown type, empty encoding */ scheduleIDSCachedQueryDebouncer;
    void /* unknown type, empty encoding */ scheduleNotificationSubject;
    void /* unknown type, empty encoding */ scheduleNotificationDebouncer;
    void /* unknown type, empty encoding */ idsDestinations;
    void /* unknown type, empty encoding */ idsGroupDestinations;
    void /* unknown type, empty encoding */ idsLookupManager;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (void)addRecipient:(id)a0;
- (void)reset;
- (void)removeRecipient:(id)a0;
- (void)queryAddresses:(id)a0;
- (void)handleIDSStatusChanged;
- (long long)isAudioAllowedFor:(id)a0;
- (long long)isFaceTimeAllowedFor:(id)a0;
- (long long)isMultiwayAllowedFor:(id)a0;
- (long long)isVideoAllowedFor:(id)a0;
- (long long)isWebCapableFor:(id)a0;
- (long long)presentationStyleFor:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
