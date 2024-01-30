@class FMDEmergencyCallInfoPublisherConfiguration;

@interface FMDEmergencyCallInfoPublisher : NSObject

@property (retain, nonatomic) FMDEmergencyCallInfoPublisherConfiguration *publisherConfig;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)publishInfo:(id)a0 completion:(id /* block */)a1;

@end
