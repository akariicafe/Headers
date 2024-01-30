@class DIClientContext, NSError;

@interface DIXPCDispatcher : NSObject <DIXPCClientInterface> {
    void /* unknown type, empty encoding */ clientContext;
    void /* unknown type, empty encoding */ logger;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ deviceListDelegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ deviceStatusDelegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ sessionStatusDelegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ audioPowerDelegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ audioStatusDelegate;

- (void)didAddDevice:(id)a0;
- (void)didRemoveDevice:(id)a0;
- (void)session:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)didUpdateSession:(id)a0;
- (void)session:(id)a0 didUpdateUplinkMuteStatus:(BOOL)a1;
- (id)initWithClientContext:(id)a0;
- (void)didLoadDevices:(id)a0;
- (void)didAddSession:(id)a0;
- (void)didRemoveSession:(id)a0;
- (void)didUpdateAudioPower:(float)a0;
- (void)didUpdateDevice:(id)a0;
- (void)didUpdateDownlinkMuteStatus:(BOOL)a0;
- (void)didUpdateUplinkMuteStatus:(BOOL)a0;
- (void)fetchClientContextWithCompletionHandler:(void (^)(DIClientContext *, NSError *))a0;

@end
