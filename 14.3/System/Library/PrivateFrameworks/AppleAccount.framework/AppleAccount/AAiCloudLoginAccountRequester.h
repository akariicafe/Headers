@interface AAiCloudLoginAccountRequester : NSObject

+ (id)delegateParamsForAllDelegates;
+ (id)delegateParamsForiCloudOnly;

- (void)loginWithAccount:(id)a0 forDelegates:(id)a1 completion:(id /* block */)a2;

@end
