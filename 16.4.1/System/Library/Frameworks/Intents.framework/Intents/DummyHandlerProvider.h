@class NSString;

@interface DummyHandlerProvider : NSObject <INIntentHandlerProvidingPrivate>

@property (readonly, nonatomic) id handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHandler:(id)a0;
- (void).cxx_destruct;
- (id)handlerForIntent:(id)a0;

@end
