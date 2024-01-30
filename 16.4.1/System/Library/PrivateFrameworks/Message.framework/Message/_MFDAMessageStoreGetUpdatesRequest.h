@interface _MFDAMessageStoreGetUpdatesRequest : DAMailboxGetUpdatesRequest <MFDAMailAccountRequest> {
    BOOL _isUserRequested;
}

@property (readonly, nonatomic) BOOL shouldSend;
@property (readonly, nonatomic) BOOL isUserRequested;

- (unsigned long long)generationNumber;
- (id)deferredOperation;
- (id)initRequestForBodyFormat:(int)a0 withBodySizeLimit:(int)a1 isUserRequested:(BOOL)a2;
- (BOOL)mf_alwaysReportFailures;

@end
