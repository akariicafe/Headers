@interface HFMutableAggregatedCharacteristicReadPolicy : HFAggregatedCharacteristicReadPolicy

- (void)setPolicies:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)pushPolicy:(id)a0;
- (id)popPolicy;

@end
