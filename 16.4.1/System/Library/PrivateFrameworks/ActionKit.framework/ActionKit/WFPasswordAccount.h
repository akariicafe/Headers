@class NSString;

@interface WFPasswordAccount : WFAccount

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;

+ (id)accountWithUsername:(id)a0 password:(id)a1;

- (id)localizedName;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
