@class NSString;
@protocol PKSubcredentialMessageComposeViewControllerDelegate;

@interface PKRemoteSubcredentialMessageComposeViewController : _UIRemoteViewController <PKRemoteSubcredentialMessageComposeViewControllerProtocol> {
    BOOL _finished;
}

@property (weak, nonatomic) id<PKSubcredentialMessageComposeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)messageComposeViewControllerDidFinishWithResult:(BOOL)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
