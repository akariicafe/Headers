@class NSString;

@interface SLComposeViewControllerDelegate : NSObject <MFMessageComposeViewControllerDelegate>

@property (readonly, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;

@end
