@class NSString;

@interface BFFFinishSetupFaceIDViewController : BFFFaceIDViewController <BFFFaceIDViewControllerDelegate>

@property (copy, nonatomic) NSString *passcode;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)init;
- (id)passcodeForFaceIDViewController:(id)a0;
- (void)faceIDViewController:(id)a0 didCompleteWithResult:(unsigned long long)a1 pushedViewControllers:(id)a2;

@end
