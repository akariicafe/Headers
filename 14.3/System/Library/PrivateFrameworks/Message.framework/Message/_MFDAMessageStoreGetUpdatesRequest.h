@interface _MFDAMessageStoreGetUpdatesRequest : DAMailboxGetUpdatesRequest <MFDAMailAccountRequest> {
    BOOL _isUserRequested;
}

@property (readonly, nonatomic) BOOL shouldSend;
@property (readonly, nonatomic) BOOL isUserRequested;

- (BOOL)mf_alwaysReportFailures;
- (id)initRequestForBodyFormat:(int)a0 withBodySizeLimit:(int)a1 isUserRequested:(BOOL)a2;
- (id)deferredOperation;
- (unsigned long long)generationNumber;

@end
