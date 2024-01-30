@class NSString;

@interface _SBLegacyRemoteAlertContentHostViewController : _UIRemoteViewController <SBSUIRemoteAlertItemContentHostInterface> {
    BOOL _serviceHasSetPreferredContentSize;
}

@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *serviceClassName;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (BOOL)_canShowWhileLocked;
- (id)description;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)_getPreferredContentSizeWithReplyBlock:(id /* block */)a0;

@end
