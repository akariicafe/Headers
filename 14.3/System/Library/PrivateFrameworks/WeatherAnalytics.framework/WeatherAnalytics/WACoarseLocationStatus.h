@interface WACoarseLocationStatus : NSObject <AADataType>

@property (readonly, nonatomic) long long coarseLocationStatus;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithCoarseLocationStatus:(long long)a0;

@end
