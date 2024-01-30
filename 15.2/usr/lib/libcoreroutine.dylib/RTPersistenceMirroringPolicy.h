@class RTTokenBucket;

@interface RTPersistenceMirroringPolicy : NSObject <NSCopying>

@property (retain, nonatomic) RTTokenBucket *tokenBucket;
@property (readonly, nonatomic) long long qualityOfService;
@property (readonly, nonatomic) BOOL allowsMirroringViaCellular;
@property (readonly, nonatomic) BOOL mirroringOperationAllowed;

- (double)timeIntervalUntilOperationAllowed;
- (id)description;
- (id)qualityOfServiceToString:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQualityOfService:(long long)a0;
- (id)initWithQualityOfService:(long long)a0 tokenBucket:(id)a1;

@end
