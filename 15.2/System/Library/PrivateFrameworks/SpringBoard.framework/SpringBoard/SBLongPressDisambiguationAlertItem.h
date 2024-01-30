@interface SBLongPressDisambiguationAlertItem : SBAlertItem {
    long long _result;
}

@property (readonly, copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;
- (id)init;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)dismissOnLock;
- (void)deactivateForButton;
- (BOOL)ignoreIfAlreadyDisplaying;

@end
