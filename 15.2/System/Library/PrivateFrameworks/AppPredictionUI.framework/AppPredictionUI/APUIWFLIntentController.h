@class INIntent;
@protocol APUIWFLIntentControllerDelegate;

@interface APUIWFLIntentController : NSObject

@property (retain, nonatomic) INIntent *intent;
@property (copy, nonatomic) id /* block */ intentProceedHandler;
@property (nonatomic) long long executionContext;
@property (weak, nonatomic) id<APUIWFLIntentControllerDelegate> delegate;

- (void)begin;
- (id)initWithIntent:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)launchAppWithCompletionHandler:(id /* block */)a0;
- (void)_logFaultFromFunction:(const char *)a0;
- (void)confirmationGranted:(BOOL)a0;

@end
