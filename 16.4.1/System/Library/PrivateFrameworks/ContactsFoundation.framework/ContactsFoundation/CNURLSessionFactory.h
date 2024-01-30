@interface CNURLSessionFactory : NSObject

@property (class, readonly) CNURLSessionFactory *defaultFactory;

- (id)defaultSessionConfiguration;
- (id)sessionWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;

@end
