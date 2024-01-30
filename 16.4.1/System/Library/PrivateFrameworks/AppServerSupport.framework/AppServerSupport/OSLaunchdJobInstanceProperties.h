@class NSString, NSDictionary;

@interface OSLaunchdJobInstanceProperties : NSObject

@property (retain, nonatomic) NSString *sandboxProfile;
@property (retain, nonatomic) NSDictionary *environmentVariables;

- (void).cxx_destruct;

@end
