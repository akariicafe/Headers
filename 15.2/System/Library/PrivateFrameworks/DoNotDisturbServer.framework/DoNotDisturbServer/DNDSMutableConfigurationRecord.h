@class NSNumber;

@interface DNDSMutableConfigurationRecord : DNDSConfigurationRecord

@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSNumber *suppressionType;
@property (copy, nonatomic) NSNumber *minimumBreakthroughUrgency;
@property (copy, nonatomic) NSNumber *hideApplicationBadges;

- (void)setMinimumBreakthroughUrgency:(id)a0;
- (void)setSuppressionType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHideApplicationBadges:(id)a0;
- (void)setType:(id)a0;

@end
