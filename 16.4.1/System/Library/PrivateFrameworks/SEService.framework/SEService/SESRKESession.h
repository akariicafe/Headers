@class NSString;
@protocol SESRKESessionDelegate;

@interface SESRKESession : SESSession <SESRKESessionCallbackInterface>

@property (weak, nonatomic) id<SESRKESessionDelegate> delegate;
@property (readonly, nonatomic) NSString *activeKeyIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newInstance;

- (void).cxx_destruct;
- (void)didStartSession:(id)a0;
- (id)getVehicleReports:(id *)a0;
- (id)cancelRKEFunction:(id)a0 readerIdentifier:(id)a1;
- (void)didEndUnexpectedly:(id)a0;
- (void)didInvalidateWithError:(id)a0;
- (void)didReceivePassthroughMessage:(id)a0 fromVehicle:(id)a1;
- (BOOL)isPassiveEntryAvailable:(id)a0 isAvailable:(BOOL *)a1 error:(id *)a2;
- (void)sendEvent:(id)a0 fromVehicle:(id)a1;
- (BOOL)sendPassthroughMessage:(id)a0 readerIdentifier:(id)a1 error:(id *)a2;
- (void)sendRKEFunction:(id)a0 action:(id)a1 readerIdentifier:(id)a2 authorization:(id)a3 isEnduring:(BOOL)a4 completion:(id /* block */)a5;

@end
