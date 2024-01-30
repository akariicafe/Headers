@interface CNURLSessionFactory : NSObject

+ (id)defaultFactory;

- (id)sessionWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (id)defaultSessionConfiguration;

@end
