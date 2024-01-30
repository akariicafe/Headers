@interface SBDisabledIdleTimer : SBIdleTimerBase {
    BOOL _activated;
}

- (BOOL)isActivated;
- (void)setActivated:(BOOL)a0;
- (BOOL)isDisabled;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;

@end
