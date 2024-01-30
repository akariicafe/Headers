@class UIAutonomousSingleAppModeSession;

@interface AEDConcreteSingleAppModeSession : NSObject <AEDSingleAppModeSession> {
    UIAutonomousSingleAppModeSession *_session;
}

- (void).cxx_destruct;
- (void)deactivateWithCompletion:(id /* block */)a0;

@end
