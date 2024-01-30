@interface HKHealthServiceDiscovery : NSObject

@property (nonatomic) unsigned long long discoveryIdentifier;
@property (copy, nonatomic) id /* block */ discoveryHandler;
@property (readonly, nonatomic) long long serviceType;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)initForAllTypes;

@end
