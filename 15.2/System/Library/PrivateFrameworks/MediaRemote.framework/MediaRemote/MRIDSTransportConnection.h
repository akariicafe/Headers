@class NSString, MRIDSConnectivityManager, NSError;

@interface MRIDSTransportConnection : MRExternalDeviceTransportConnection <NSStreamDelegate> {
    MRIDSConnectivityManager *_connection;
    NSError *_error;
}

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSString *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)runLoop;
- (void)closeWithError:(id)a0;
- (void)setRunLoop:(id)a0;
- (long long)_idsPriorityFromPriority:(long long)a0;
- (void)ingestData:(id)a0;
- (id)exportEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 type:(id)a1 destination:(id)a2 session:(id)a3;
- (id)exportOutputDevice:(id)a0 endpoint:(id)a1;
- (id)error;
- (unsigned long long)sendTransportData:(id)a0 options:(id)a1;
- (void)dealloc;
- (id)_exportDescriptorForOutputDevice:(id)a0 endpoint:(id)a1 remoteControl:(BOOL)a2;
- (BOOL)isValid;

@end
