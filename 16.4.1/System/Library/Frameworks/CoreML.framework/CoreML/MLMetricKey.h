@interface MLMetricKey : MLKey

@property (class, readonly, nonatomic) MLMetricKey *lossValue;
@property (class, readonly, nonatomic) MLMetricKey *epochIndex;
@property (class, readonly, nonatomic) MLMetricKey *miniBatchIndex;

- (id)initWithKeyName:(id)a0;

@end
