@class MUPlaceExternalActionMenuHelper, GEOPlaceExternalAction;

@interface MUPlaceExternalActionViewModel : MUActionRowItemViewModel {
    MUPlaceExternalActionMenuHelper *_menuHelper;
}

@property (readonly, nonatomic) GEOPlaceExternalAction *externalAction;

- (id)accessibilityIdentifier;
- (id)symbolName;
- (BOOL)isEnabled;
- (id)titleText;
- (void).cxx_destruct;
- (id)analyticsButtonValues;
- (id)buildMenuWithPresentationOptions:(id)a0;
- (id)initWithExternalAction:(id)a0 amsResultProvider:(id)a1 iconCache:(id)a2 actionHandler:(id)a3 analyticsHandler:(id)a4;
- (void)performSingleVendorSelectionAction;

@end
