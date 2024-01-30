@class UIApplication, NSString;

@interface INUIAppIntentForwardingActionExecutor : NSObject <INIntentDeliveringDelegate> {
    id _handlerForIntent;
}

@property (retain, nonatomic) UIApplication *application;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
