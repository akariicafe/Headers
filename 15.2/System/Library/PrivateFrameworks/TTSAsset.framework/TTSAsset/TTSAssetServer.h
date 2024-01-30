@interface TTSAssetServer : TTSStringEnum

@property (class, nonatomic, readonly) TTSAssetServer *production;
@property (class, nonatomic, readonly) TTSAssetServer *livability;
@property (class, nonatomic, readonly) TTSAssetServer *staging;

- (BOOL)isEqual:(id)a0;

@end
