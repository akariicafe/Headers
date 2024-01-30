@class NSString, ICStoreRequestContext, NSData;

@interface ICAuthorizeMachineRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSString *keybagPath;
@property (nonatomic) long long qualityOfService;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) NSData *tokenData;

- (void)performWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestContext:(id)a0;

@end
