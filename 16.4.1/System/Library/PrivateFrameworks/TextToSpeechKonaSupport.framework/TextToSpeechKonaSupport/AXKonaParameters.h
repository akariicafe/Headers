@interface AXKonaParameters : NSObject

@property (nonatomic) long long vocalTract;
@property (nonatomic) long long headSize;
@property (nonatomic) long long pitchBase;
@property (nonatomic) long long pitchFluctuation;
@property (nonatomic) long long roughness;
@property (nonatomic) long long breathiness;
@property (nonatomic) long long speed;
@property (nonatomic) long long volume;

- (id)copy;

@end
