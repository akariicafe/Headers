@interface SBImageHeaderAlertItem : SBAlertItem {
    long long _type;
}

- (id)initWithType:(long long)a0;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)dismissOnLock;
- (BOOL)ignoreIfAlreadyDisplaying;

@end
