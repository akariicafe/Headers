@class NSString;

@interface FedStatsCohortQueryFieldGeneric : NSObject <FedStatsCohortQueryProtocol>

@property (readonly, nonatomic) NSString *cohortName;

+ (id)cohortInstance;
+ (id)cohortQueryFieldWithKey:(id)a0;

- (void).cxx_destruct;
- (id)cohortKeyForParameters:(id)a0 possibleError:(id *)a1;
- (id)initQueryFieldWithKey:(id)a0;

@end
