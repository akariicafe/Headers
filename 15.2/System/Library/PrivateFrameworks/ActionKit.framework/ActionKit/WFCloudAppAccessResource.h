@class NSArray;

@interface WFCloudAppAccessResource : WFAccountAccessResource

@property (readonly, copy, nonatomic) NSArray *accounts;

+ (void)getAccountWithUsername:(id)a0 password:(id)a1 completionHandler:(id /* block */)a2;
+ (void)accountInformationRetrievalSucceeded:(id)a0 connectionIdentifier:(id)a1 userInfo:(id)a2;
+ (void)requestDidFailWithError:(id)a0 connectionIdentifier:(id)a1 userInfo:(id)a2;

- (id)icon;
- (id)name;
- (Class)accountClass;

@end
