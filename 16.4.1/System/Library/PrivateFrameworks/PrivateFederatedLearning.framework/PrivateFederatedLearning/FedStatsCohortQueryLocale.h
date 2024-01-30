@class NSString;

@interface FedStatsCohortQueryLocale : NSObject <FedStatsCohortQueryProtocol>

@property (readonly, nonatomic) NSString *deviceLocale;

+ (id)cohortInstance;

- (id)init;
- (void).cxx_destruct;
- (id)cohortKeyForParameters:(id)a0 possibleError:(id *)a1;

@end
