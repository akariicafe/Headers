@class NSString, NDOManager, NDOACController, NDODevice, NSMutableDictionary, UIContentUnavailableConfiguration, NSMutableArray, NDOAppleCareAMSUIViewController, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface NDOCoverageCentralViewController : PSListController <NDOAppleCareAMSUIViewPresenterProtocol> {
    NSObject<OS_dispatch_queue> *_policyLookupQueue;
    NSObject<OS_dispatch_group> *_group;
    UIContentUnavailableConfiguration *_loadingConfig;
}

@property BOOL isFromDeeplink;
@property (retain) NSString *deeplinkParams;
@property (retain, nonatomic) NDOManager *ndoManager;
@property (retain, nonatomic) NDODevice *defaultDevice;
@property (retain, nonatomic) NSMutableArray *pairedDevices;
@property (retain, nonatomic) NSMutableArray *allDevices;
@property (retain) NSMutableDictionary *deviceInfoDict;
@property (retain) NSMutableDictionary *deviceSequenceDict;
@property (retain, nonatomic) NDOAppleCareAMSUIViewController *amsUIVC;
@property BOOL isSignedIn;
@property (weak, nonatomic) NDOACController *acController;
@property BOOL openDefaultDeviceDetails;

- (void)openURL:(id)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)resetAll;
- (id)specifiers;
- (void)_refresh:(id)a0;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)showUI;
- (void)completeWithStatus:(unsigned long long)a0;
- (void)fetchAllDevices;
- (id)_errorStateConfig;
- (id)_getDevicePayloadWithParams:(id)a0;
- (id)_getParamsDictFromPath:(id)a0;
- (id)_getUpdatedParamsFromPath:(id)a0;
- (id)_noAccountConfig;
- (void)addFooterLabelToSpecifier:(id)a0;
- (void)amsUIViewFinishedWithCompletion:(unsigned long long)a0;
- (void)amsUIViewFinishedWithCompletion:(unsigned long long)a0 params:(id)a1;
- (void)completeWithStatus:(unsigned long long)a0 params:(id)a1;
- (void)fetchAllDeviceInfoUsingPolicy:(unsigned long long)a0 params:(id)a1 isSales:(BOOL)a2 withReply:(id /* block */)a3;
- (void)footerTapped:(id)a0;
- (void)getAllDeviceInfoUsingPolicy:(unsigned long long)a0 params:(id)a1 isSales:(BOOL)a2 withReply:(id /* block */)a3;
- (void)getDeviceInfoForSerialNumber:(id)a0 usingPolicy:(unsigned long long)a1 params:(id)a2 withReply:(id /* block */)a3;
- (void)openAMSUIWithHTTPBody:(id)a0;
- (id)updateCells;
- (void)updateDefaultDeviceWithDeviceInfo:(id)a0;
- (void)updateDeviceInfoForDevice:(id)a0 usingPolicy:(unsigned long long)a1 params:(id)a2 withReply:(id /* block */)a3;

@end
