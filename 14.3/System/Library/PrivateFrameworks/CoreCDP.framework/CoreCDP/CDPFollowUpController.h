@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject {
    CDPDaemonConnection *_daemonConn;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)postFollowUpWithContext:(id)a0 error:(id *)a1;
- (void)invalidate;
- (BOOL)clearFollowUpWithContext:(id)a0 error:(id *)a1;

@end
