@class NSString;

@interface TUDiscoverabilitySignal : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *context;

+ (id)osBuild;

- (void)donateSignalWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_discoverabilitySignalsStream;
- (id)initWithIdentifier:(id)a0 context:(id)a1;

@end
