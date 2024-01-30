@class ICADIProvisionSession;

@interface ICMachineDataProvisionOperation : ICMachineDataOperation {
    ICADIProvisionSession *_provisionSession;
}

- (void).cxx_destruct;
- (void)execute;
- (void)_finishWithError:(id)a0;

@end
