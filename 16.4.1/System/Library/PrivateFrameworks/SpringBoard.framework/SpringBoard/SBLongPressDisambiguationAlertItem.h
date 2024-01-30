@interface SBLongPressDisambiguationAlertItem : SBAlertItem {
    long long _result;
}

@property (readonly, copy, nonatomic) id /* block */ completion;

- (id)initWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)dismissOnLock;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)deactivateForButton;
- (BOOL)ignoreIfAlreadyDisplaying;

@end
