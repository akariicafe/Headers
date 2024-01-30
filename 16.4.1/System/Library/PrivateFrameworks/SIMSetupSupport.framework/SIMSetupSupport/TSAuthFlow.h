@class NSData, LAContext, NSString;

@interface TSAuthFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate>

@property (retain) NSData *externalizedContext;
@property (retain, nonatomic) LAContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithExternalizedContext:(id)a0;
- (void).cxx_destruct;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)a0;
- (id)nextViewControllerFrom:(id)a0;

@end
