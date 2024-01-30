@class NSString, NSMutableDictionary, NSXPCConnection;
@protocol ADAMAudioDataReceiverDelegate;

@interface ADAMAudioDataReceiver : NSObject <ADAMClientDelegate> {
    NSString *_name;
    NSMutableDictionary *_sensorStatus;
    NSMutableDictionary *_callbacks;
    NSMutableDictionary *_configs;
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property BOOL connectionDidInvalidate;
@property (weak, nonatomic) id<ADAMAudioDataReceiverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reconnect;
- (void)startReceivingAudioSampleType:(unsigned int)a0;
- (void).cxx_destruct;
- (BOOL)isMeasurementOnForAudioSampleType:(unsigned int)a0;
- (void)reset;
- (void)handleAndLogError:(id)a0;
- (void)dealloc;
- (id)setupConnection;
- (BOOL)verifyInvariants;
- (id)initWithIdentifier:(id)a0;
- (void)receiveAudioSample:(id)a0 type:(unsigned int)a1 metadata:(id)a2;
- (void)startReceivingAudioSampleType:(unsigned int)a0 withCallback:(id /* block */)a1;
- (id)getCurrentConfigurationForAudioSampleType:(unsigned int)a0;
- (void)stopMeasuringAudioSampleType:(unsigned int)a0;
- (void)startMeasuringAudioSampleType:(unsigned int)a0 withConfiguration:(id)a1;
- (void)receiveAudioSample:(id)a0;
- (void)stopReceivingAudioSampleType:(unsigned int)a0;
- (void)configureAudioSampleType:(unsigned int)a0 configuration:(id)a1;

@end
