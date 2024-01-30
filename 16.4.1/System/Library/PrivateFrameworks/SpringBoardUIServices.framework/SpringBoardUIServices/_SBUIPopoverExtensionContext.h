@protocol _SBUIPopoverExtensionHostInterface;

@interface _SBUIPopoverExtensionContext : NSExtensionContext

@property (weak, nonatomic) id<_SBUIPopoverExtensionHostInterface> hostService;

- (void).cxx_destruct;
- (void)requestDismiss;

@end
