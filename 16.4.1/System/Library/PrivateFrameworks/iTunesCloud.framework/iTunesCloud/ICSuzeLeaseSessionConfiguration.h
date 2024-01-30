@class ICStoreRequestContext;

@interface ICSuzeLeaseSessionConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) id leaseID;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, copy, nonatomic) ICStoreRequestContext *requestContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0 leaseID:(id)a1 mediaType:(long long)a2;

@end
