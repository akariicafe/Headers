@interface TPSResponseError : NSError

+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;

- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
- (id)initWithCode:(long long)a0 userInfo:(id)a1;

@end
