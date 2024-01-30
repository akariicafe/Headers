@class NSString;

@interface WFTrelloAccount : WFAccount

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *email;

+ (id)serviceID;
+ (id)localizedServiceName;
+ (id)accountWithToken:(id)a0;

- (void).cxx_destruct;
- (id)localizedName;
- (BOOL)isValid;
- (void)refreshWithCompletionHandler:(id /* block */)a0;

@end
