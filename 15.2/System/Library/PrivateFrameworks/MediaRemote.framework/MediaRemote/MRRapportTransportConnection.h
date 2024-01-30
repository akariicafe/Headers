@class NSString, RPCompanionLinkClient;

@interface MRRapportTransportConnection : MRExternalDeviceTransportConnection

@property (readonly, nonatomic) NSString *sessionUID;
@property (readonly, nonatomic) NSString *eventID;
@property (retain, nonatomic) RPCompanionLinkClient *connection;

- (id)runLoop;
- (void)closeWithError:(id)a0;
- (void)setRunLoop:(id)a0;
- (void)_registerCallbacks;
- (BOOL)_targetDeviceMatch:(id)a0 deviceUID:(id)a1;
- (id)initWithCompanionLinkClient:(id)a0 device:(id)a1 sessionUID:(id)a2;
- (id)initWithDeviceUID:(id)a0 sessionUID:(id)a1 targetDevice:(id *)a2 error:(id *)a3;
- (void).cxx_destruct;
- (unsigned long long)sendTransportData:(id)a0 options:(id)a1;
- (BOOL)isValid;

@end
