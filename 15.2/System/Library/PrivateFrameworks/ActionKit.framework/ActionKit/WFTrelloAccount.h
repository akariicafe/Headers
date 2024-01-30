@class NSString;

@interface WFTrelloAccount : WFAccount

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *email;

+ (id)serviceID;
+ (id)localizedServiceName;
+ (id)accountWithToken:(id)a0;

- (id)localizedName;
- (void)refreshWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
