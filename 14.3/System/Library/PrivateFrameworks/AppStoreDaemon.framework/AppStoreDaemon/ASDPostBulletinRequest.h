@class ASDPostBulletinRequestOptions;

@interface ASDPostBulletinRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPostBulletinRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;

@end
