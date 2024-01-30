@interface SBDisabledIdleTimer : SBIdleTimerBase {
    BOOL _activated;
}

- (void)setActivated:(BOOL)a0;
- (BOOL)isActivated;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isDisabled;
- (void)reset;

@end
