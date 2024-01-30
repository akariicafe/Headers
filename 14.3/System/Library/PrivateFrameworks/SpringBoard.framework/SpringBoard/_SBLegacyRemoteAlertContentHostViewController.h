@class NSString;

@interface _SBLegacyRemoteAlertContentHostViewController : _UIRemoteViewController <SBSUIRemoteAlertItemContentHostInterface> {
    BOOL _serviceHasSetPreferredContentSize;
}

@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *serviceClassName;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)description;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)_getPreferredContentSizeWithReplyBlock:(id /* block */)a0;

@end
