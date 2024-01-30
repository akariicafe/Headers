@class NSString;

@interface EKCredentials : NSObject

@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *password;

+ (id)credentialsWithUsername:(id)a0 password:(id)a1;

- (void).cxx_destruct;
- (id)description;

@end
