@class AVPlayerItem, NSString, NSMutableSet, AVBonjourService, NSObject;
@protocol OS_dispatch_queue, AVAirMessageNotificationCenterDelegate;

@interface AVAirMessageNotificationCenter : NSObject <AVBonjourServiceDelegate, AVAirTransportDelegate> {
    BOOL _started;
}

@property (class, readonly) BOOL isPrepared;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *activeChannels;
@property (weak, nonatomic) id<AVAirMessageNotificationCenterDelegate> delegate;
@property (readonly, nonatomic) AVBonjourService *mainService;
@property (retain, nonatomic) AVPlayerItem *nowPlayingPlayerItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;
+ (void)prepare;
+ (BOOL)_isNotificationCenterEnabled;

- (id)_initPrivate;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stop;
- (void)airTransport:(id)a0 didReceiveObject:(id)a1;
- (void)airTransportInputDidClose:(id)a0;
- (id)bonjourServiceAdditionalTXTRecordInfo:(id)a0;
- (void)bonjourService:(id)a0 didAcceptConnectionChannel:(id)a1;
- (void)bonjourService:(id)a0 didCloseChannel:(id)a1;
- (id)playerItemForIdentifier:(id)a0;
- (void)handleCommandMessage:(id)a0 completion:(id /* block */)a1;

@end
