@interface HFMutableAggregatedCharacteristicReadPolicy : HFAggregatedCharacteristicReadPolicy

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setPolicies:(id)a0;
- (id)popPolicy;
- (void)pushPolicy:(id)a0;

@end
