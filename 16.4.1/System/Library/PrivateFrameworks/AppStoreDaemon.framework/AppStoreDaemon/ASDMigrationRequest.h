@class ASDMigrationRequestOptions;

@interface ASDMigrationRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDMigrationRequestOptions *options;

+ (long long)requestType;

- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)initWithOptions:(id)a0;

@end
