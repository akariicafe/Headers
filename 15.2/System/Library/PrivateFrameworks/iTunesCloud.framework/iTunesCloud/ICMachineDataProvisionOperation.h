@class ICADIProvisionSession;

@interface ICMachineDataProvisionOperation : ICMachineDataOperation {
    ICADIProvisionSession *_provisionSession;
}

- (void)execute;
- (void)_finishWithError:(id)a0;
- (void).cxx_destruct;

@end
