@class NSString, MKETAProvider;

@interface MUDirectionsActionRowItemViewModel : MUActionRowItemViewModel <MKETAProviderObserver> {
    MKETAProvider *_etaProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityIdentifier;
- (id)symbolName;
- (BOOL)isEnabled;
- (id)titleText;
- (void).cxx_destruct;
- (id)preferredBackgroundColor;
- (void)ETAProviderUpdated:(id)a0;
- (id)analyticsButtonValue;
- (id)initWithETAProvider:(id)a0;
- (id)preferredTintColor;

@end
