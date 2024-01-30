@class NSString, AAUISignInController;

@interface BFFFinishSetupAppleIDController : NSObject <AAUISignInControllerDelegate, BFFFinishSetupFlowControlling> {
    BFFFinishSetupAppleIDController *_selfReference;
    AAUISignInController *_signInController;
}

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)finishSetupAppleIDController;

@end
