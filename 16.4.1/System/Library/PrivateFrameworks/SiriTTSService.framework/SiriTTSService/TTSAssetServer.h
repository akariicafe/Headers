@interface TTSAssetServer : TTSStringEnum

@property (class, nonatomic, readonly) TTSAssetServer *production;
@property (class, nonatomic, readonly) TTSAssetServer *livability;
@property (class, nonatomic, readonly) TTSAssetServer *staging;

@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;

@end
