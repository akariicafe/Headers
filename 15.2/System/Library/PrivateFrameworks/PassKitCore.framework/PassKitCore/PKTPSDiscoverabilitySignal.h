@class NSString;

@interface PKTPSDiscoverabilitySignal : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *context;

- (id)initWithIdentifier:(id)a0;
- (void)donateSignalWithCompletion:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 context:(id)a2;
- (void).cxx_destruct;

@end
