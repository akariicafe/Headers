@interface WFActionViewModel : NSObject <WFActionEventObserver, WFParameterEventObserver> {
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ visibleParameters;
    void /* unknown type, empty encoding */ lastSummaryInput;
    void /* unknown type, empty encoding */ parameterSummary;
    void /* unknown type, empty encoding */ additionalParameterSummaries;
    void /* unknown type, empty encoding */ showMoreParameters;
    void /* unknown type, empty encoding */ _isFavorite;
    void /* unknown type, empty encoding */ _resourceError;
    void /* unknown type, empty encoding */ _accessResourcesThatCanLogOut;
    void /* unknown type, empty encoding */ _accessResourcesAllowingMultipleAccounts;
}

- (void)favoritesDidChange;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)actionNameDidChange:(id)a0;
- (void)actionOutputDetailsDidChange:(id)a0;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (void)parameterAttributesDidChange:(id)a0;
- (void)resourcesDidChange:(id)a0;
- (void)pasteboardDidChange;

@end
