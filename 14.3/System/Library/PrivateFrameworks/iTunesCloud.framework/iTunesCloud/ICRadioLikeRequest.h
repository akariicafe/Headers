@class NSString, ICStoreRequestContext;

@interface ICRadioLikeRequest : NSObject <NSCopying>

@property (nonatomic) long long storeAdamID;
@property (nonatomic) long long likeState;
@property (copy, nonatomic) NSString *stationHash;
@property (nonatomic) long long stationID;
@property (copy, nonatomic) NSString *stationStringID;
@property (nonatomic) long long qualityOfService;
@property (copy, nonatomic) ICStoreRequestContext *requestContext;

- (void)performWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestContext:(id)a0;

@end
