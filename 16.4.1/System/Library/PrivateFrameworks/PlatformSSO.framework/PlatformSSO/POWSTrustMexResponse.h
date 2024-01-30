@class NSString;

@interface POWSTrustMexResponse : NSObject

@property (nonatomic) unsigned long long version;
@property (copy, nonatomic) NSString *endpointURLString;
@property (copy, nonatomic) NSString *policyName;
@property (copy, nonatomic) NSString *bindingName;
@property (copy, nonatomic) NSString *portName;

- (void).cxx_destruct;

@end
