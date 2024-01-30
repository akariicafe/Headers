@interface HMDSiriAccessoryInfo : NSObject

@property (weak, nonatomic) id targetsAccessory;
@property (nonatomic) BOOL supportsDragonSiri;

+ (id)infoWithTargetableAccessory:(id)a0;

- (void).cxx_destruct;
- (BOOL)isActiveAndSupportsDragonSiri;

@end
