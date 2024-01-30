@interface MenstrualCyclesAppPlugin.CycleLogModelProvider : NSObject <TPKContentControllerDelegate> {
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ _model;
    void /* unknown type, empty encoding */ preferredUnitProvider;
    void /* unknown type, empty encoding */ todayProvider;
}

- (void)contentController:(id)a0 didFinishWithContent:(id)a1 animated:(BOOL)a2;
- (id)contentController:(id)a0 contentView:(id)a1 iconForCustomizationID:(long long)a2;
- (void)contentController:(id)a0 contentDidBecomeAvailable:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
