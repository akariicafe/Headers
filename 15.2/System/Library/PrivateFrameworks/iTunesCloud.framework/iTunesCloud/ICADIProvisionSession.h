@interface ICADIProvisionSession : NSObject {
    unsigned long long _accountID;
    unsigned int _sessionID;
}

- (id)initWithAccountID:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)startWithServerActionData:(id)a0 returningClientData:(id *)a1 error:(id *)a2;
- (BOOL)endWithMessageData:(id)a0 transportKey:(id)a1 error:(id *)a2;
- (void)_destroySession;

@end
