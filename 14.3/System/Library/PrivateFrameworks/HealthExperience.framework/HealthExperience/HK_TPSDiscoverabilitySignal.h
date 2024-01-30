@class NSString;

@interface HK_TPSDiscoverabilitySignal : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *context;

+ (id)osBuild;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)_discoverabilitySignalsStream;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 context:(id)a2;
- (void)donateSignalWithCompletion:(id /* block */)a0;
- (id)_knowledgeStore;

@end
