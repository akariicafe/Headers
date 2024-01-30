@class RTTokenBucket;

@interface RTPersistenceMirroringPolicy : NSObject <NSCopying>

@property (retain, nonatomic) RTTokenBucket *tokenBucket;
@property (readonly, nonatomic) long long qualityOfService;
@property (readonly, nonatomic) BOOL allowsMirroringViaCellular;
@property (readonly, nonatomic) BOOL mirroringOperationAllowed;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)timeIntervalUntilOperationAllowed;
- (id)initWithQualityOfService:(long long)a0;
- (id)description;
- (id)initWithQualityOfService:(long long)a0 tokenBucket:(id)a1;
- (id)qualityOfServiceToString:(long long)a0;

@end
