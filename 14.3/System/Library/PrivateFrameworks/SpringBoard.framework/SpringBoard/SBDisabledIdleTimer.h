@interface SBDisabledIdleTimer : SBIdleTimerBase {
    BOOL _activated;
}

- (void)setActivated:(BOOL)a0;
- (BOOL)isActivated;
- (BOOL)isDisabled;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (BOOL)isEqual:(id)a0;

@end
