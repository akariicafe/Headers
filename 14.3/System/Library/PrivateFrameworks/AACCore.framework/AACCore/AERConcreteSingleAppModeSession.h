@class UIAutonomousSingleAppModeSession;

@interface AERConcreteSingleAppModeSession : NSObject <AERSingleAppModeSession> {
    UIAutonomousSingleAppModeSession *_session;
}

- (void).cxx_destruct;
- (void)deactivateWithCompletion:(id /* block */)a0;

@end
