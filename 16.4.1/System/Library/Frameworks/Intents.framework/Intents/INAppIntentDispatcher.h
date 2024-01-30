@class NSString;
@protocol INIntentDeliveringDelegate;

@interface INAppIntentDispatcher : NSObject <INIntentDeliveringDelegate>

@property (weak, nonatomic) id<INIntentDeliveringDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dispatchIntentForwardingAction:(id)a0 completionHandler:(id /* block */)a1;

@end
