@class SSURLRequestProperties, SUMescalSession;

@interface SUSetupMescalSessionOperation : ISOperation {
    SSURLRequestProperties *_requestProperties;
    SUMescalSession *_session;
}

@property (readonly) SUMescalSession *mescalSession;

- (void)run;
- (id)initWithURLRequestProperties:(id)a0;
- (void)dealloc;
- (BOOL)_isMescalEnabled;
- (id)_setupSAPCertificate:(id *)a0;
- (id)_setupSAPWithData:(id)a0 error:(id *)a1;

@end
