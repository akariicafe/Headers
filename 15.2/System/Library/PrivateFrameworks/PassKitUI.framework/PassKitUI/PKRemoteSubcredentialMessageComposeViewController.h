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

+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)messageComposeViewControllerDidFinishWithResult:(BOOL)a0;

@end
