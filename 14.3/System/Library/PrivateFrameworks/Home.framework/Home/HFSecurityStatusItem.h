@interface HFSecurityStatusItem : HFStatusItem

+ (BOOL)_currentState:(long long)a0 matchesTargetState:(long long)a1;
+ (id)_shortDescriptionForSecuritySystemState:(long long)a0;

- (id)_subclass_updateWithOptions:(id)a0;

@end
