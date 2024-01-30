@class NSString;

@interface ABPK2DDetectionConfiguration : NSObject

@property (readonly, nonatomic) long long algMode;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) long long abpkDeviceOrientation;
@property (nonatomic) long long deviceType;
@property (readonly, nonatomic) NSString *deviceANEVersion;
@property (readonly, nonatomic) BOOL deviceANEVersionPriorOrEqualToH12;

- (void).cxx_destruct;
- (id)initWithAlgorithmMode:(long long)a0;
- (id)initWithAlgorithmMode:(long long)a0 abpkDeviceOrientation:(long long)a1;
- (id)initWithAlgorithmMode:(long long)a0 deviceOrientation:(long long)a1;

@end
