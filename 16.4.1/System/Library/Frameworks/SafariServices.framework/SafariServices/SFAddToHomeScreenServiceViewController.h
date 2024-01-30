@class NSString, SFWebAppDataProvider;

@interface SFAddToHomeScreenServiceViewController : UIViewController <SFWebAppDataProviderDelegate, SFAddToHomeScreenServiceProtocol> {
    SFWebAppDataProvider *_provider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)loadURL:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)dataProvider:(id)a0 didFinishWithResult:(BOOL)a1;
- (void)didFetchManifestData:(id)a0;
- (void)didFetchWebClipMetadata:(id)a0;

@end
