@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject {
    CDPDaemonConnection *_daemonConn;
}

- (BOOL)postFollowUpWithContext:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (BOOL)clearFollowUpWithContext:(id)a0 error:(id *)a1;
- (void)dealloc;

@end
