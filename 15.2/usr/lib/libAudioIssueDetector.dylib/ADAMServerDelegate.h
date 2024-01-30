@class NSString, NSMutableDictionary, NSXPCConnection;

@interface ADAMServerDelegate : NSObject <ADAMServerProtocol> {
    NSXPCConnection *_connection;
    NSString *_clientName;
    NSMutableDictionary *_dataTypeStatus;
    NSMutableDictionary *_configs;
    long long _error_code;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerDelegate:(unsigned int)a0;
- (void).cxx_destruct;
- (void)startListeningToAudioSampleWithIdentifier:(id)a0 type:(unsigned int)a1 withReply:(id /* block */)a2;
- (void)stopListeningToAudioSampleTypeWithIdentifier:(id)a0 type:(unsigned int)a1 withReply:(id /* block */)a2;
- (void)startMeasuringAudioSampleTypeWithIdentifier:(id)a0 type:(unsigned int)a1 withConfiguration:(id)a2 andReply:(id /* block */)a3;
- (void)stopMeasuringAudioSampleTypeWithIdentifier:(id)a0 type:(unsigned int)a1 andReply:(id /* block */)a2;
- (void)configureAudioSampleTypeWithIdentifier:(id)a0 type:(unsigned int)a1 configuration:(id)a2 withReply:(id /* block */)a3;
- (void)getCurrentConfigurationForAudioSampleType:(unsigned int)a0 withReply:(id /* block */)a1;
- (void)isMeasurementOnForAudioSampleType:(unsigned int)a0 withReply:(id /* block */)a1;
- (id)initWithConnection:(id)a0 andErrorCode:(long long)a1;
- (void)setupConnection:(id)a0;
- (void)sendAudioSample:(id)a0 withType:(unsigned int)a1 metadata:(id)a2;
- (void)sendAudioSample:(id)a0;
- (BOOL)isActive:(unsigned int)a0;
- (void)deactivateAll;
- (void)unregisterDelegate;
- (BOOL)datatypeSupportsONOFF:(unsigned int)a0;
- (id)DatatypeTo4CC:(unsigned int)a0;
- (id)errorWithCode:(long long)a0 andReason:(id)a1;
- (BOOL)verifyInvariantsWithReply:(id /* block */)a0;
- (id)describeErrorCode:(long long)a0;

@end
