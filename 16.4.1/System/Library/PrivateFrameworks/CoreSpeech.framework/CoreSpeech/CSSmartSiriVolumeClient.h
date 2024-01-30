@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, CSSmartSiriVolumeClientDelegate;

@interface CSSmartSiriVolumeClient : NSObject <CSSmartSiriVolumeServiceDelegate>

@property (retain, nonatomic) NSXPCConnection *ssvConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CSSmartSiriVolumeClientDelegate> delegate;

- (void)setPermanentVolumeOffsetWithDirection:(BOOL)a0;
- (id)_getRemoteServiceProxyObject;
- (void)dealloc;
- (void)setSmartSiriVolumePercentage:(float)a0;
- (void)setSmartSiriVolumeDirection:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_createClientConnection;
- (void)didTTSVolumeChangeForReason:(unsigned long long)a0;
- (id)getVolumeForTTSType:(unsigned long long)a0 withContext:(id)a1;

@end
