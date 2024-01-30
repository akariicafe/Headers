@class NSString;

@interface FedStatsCohortQueryDeviceType : NSObject <FedStatsCohortQueryProtocol>

@property (retain) NSString *deviceType;

+ (id)cohortInstance;

- (id)initWithDeviceType:(id)a0;
- (void).cxx_destruct;
- (id)cohortKeyForParameters:(id)a0 possibleError:(id *)a1;

@end
