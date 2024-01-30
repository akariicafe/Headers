@interface HKHealthServiceDiscovery : NSObject

@property (nonatomic) unsigned long long discoveryIdentifier;
@property (copy, nonatomic) id /* block */ discoveryHandler;
@property (readonly, nonatomic) long long serviceType;

- (id)initWithType:(long long)a0;
- (void).cxx_destruct;
- (id)initForAllTypes;

@end
