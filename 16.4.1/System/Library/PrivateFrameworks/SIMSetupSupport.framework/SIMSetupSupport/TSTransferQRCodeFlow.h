@class NSString;

@interface TSTransferQRCodeFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {
    NSString *_iccid;
    NSString *_carrierName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIccid:(id)a0;
- (void)firstViewController:(id /* block */)a0;

@end
