@class NSString;

@interface _SBLegacyRemoteAlertContentHostViewController : _UIRemoteViewController <SBSUIRemoteAlertItemContentHostInterface> {
    BOOL _serviceHasSetPreferredContentSize;
}

@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *serviceClassName;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)description;
- (void).cxx_destruct;
- (void)_getPreferredContentSizeWithReplyBlock:(id /* block */)a0;

@end
