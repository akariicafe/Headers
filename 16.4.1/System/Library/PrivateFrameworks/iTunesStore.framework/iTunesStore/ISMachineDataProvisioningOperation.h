@class NSString, NSData;

@interface ISMachineDataProvisioningOperation : ISOperation {
    unsigned long long _accountID;
    BOOL _allowsBootstrapCellularData;
    BOOL _hidesServerDrivenDialogs;
    NSData *_inputData;
    long long _protocolVersion;
    NSString *_userAgent;
}

@property BOOL allowsBootstrapCellularData;
@property BOOL hidesServerDrivenDialogs;
@property long long protocolVersion;
@property (copy) NSString *userAgent;

- (void)run;
- (void).cxx_destruct;
- (BOOL)_finishProvisioningWithResponse:(id)a0 sessionID:(unsigned int)a1 error:(id *)a2;
- (id)_newFinishProvisioningOperationWithData:(id)a0;
- (id)initWithAccountIdentifier:(unsigned long long)a0 provisioningData:(id)a1;

@end
