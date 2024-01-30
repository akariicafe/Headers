@class NSUUID, NSArray, NSSet, NSString, NSURL;

@interface MSServiceAccount : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *serviceID;
@property (readonly, copy, nonatomic) NSArray *intentExamples;
@property (readonly, copy, nonatomic) NSSet *supportedMediaIntents;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *clientSecret;
@property (copy, nonatomic) NSURL *configurationURL;
@property (copy, nonatomic) NSURL *authorizationTokenURL;
@property (copy, nonatomic) NSString *authorizationScope;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 accountName:(id)a1;

@end
