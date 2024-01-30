@interface PLLoggingServiceStore : NSObject

@property (class, nonatomic, readonly) PLLoggingServiceStore *sharedInstance;

- (id)init;
- (void)storeInstrumentationWithEvents:(id)a0 completion:(id /* block */)a1;

@end
