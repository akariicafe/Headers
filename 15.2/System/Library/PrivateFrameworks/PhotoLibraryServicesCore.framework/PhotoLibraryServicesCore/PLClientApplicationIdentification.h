@class NSString;

@interface PLClientApplicationIdentification : NSObject <PLClientIdentification> {
    struct { unsigned int val[8]; } _clientAuditToken;
    int _clientProcessIdentifier;
    NSString *_trustedCallerBundleID;
}

@property (readonly, nonatomic) struct { unsigned int x0[8]; } clientAuditToken;
@property (readonly, nonatomic) int clientProcessIdentifier;
@property (readonly, nonatomic) NSString *trustedCallerBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;

@end
