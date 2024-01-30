@class NSString;

@interface WFTrelloAccount : WFAccount

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *email;

+ (id)serviceID;
+ (id)localizedServiceName;
+ (id)accountWithToken:(id)a0;

- (id)localizedName;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)refreshWithCompletionHandler:(id /* block */)a0;

@end
