@class ASDPostBulletinRequestOptions;

@interface ASDPostBulletinRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPostBulletinRequestOptions *options;

+ (long long)requestType;

- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)initWithOptions:(id)a0;

@end
