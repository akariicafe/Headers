@class NSString;
@protocol NFHCESessionDelegate;

@interface NFHCESession : NFSession <NFHostEmulationSessionCallbacks> {
    id<NFHCESessionDelegate> _delegate;
}

@property id<NFHCESessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endSession;
- (void).cxx_destruct;
- (void)didEndUnexpectedly;
- (id)readAPDU:(id *)a0;
- (void)didReceiveAPDU:(id)a0;
- (void)didConnectToReader;
- (void)didDisconnectFromReader;
- (id)startEmulation;
- (id)stopEmulation;
- (id)sendAPDU:(id)a0;

@end
