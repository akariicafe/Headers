@class MKETAProvider, NSString, GEOMapItemDetourInfo;

@interface MUPlaceAddStopActionRowItemViewModel : MUActionRowItemViewModel <MKETAProviderObserver> {
    BOOL _hiddenWhileWaitingForETA;
    double _etaTravelTime;
}

@property (readonly, nonatomic) BOOL isSearchAlongRoute;
@property (readonly, nonatomic) MKETAProvider *etaProvider;
@property (readonly, nonatomic) GEOMapItemDetourInfo *detourInfo;
@property (readonly, nonatomic) BOOL canShowDetourTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityIdentifier;
- (id)symbolName;
- (BOOL)isEnabled;
- (BOOL)isHidden;
- (id)titleText;
- (void).cxx_destruct;
- (id)preferredBackgroundColor;
- (void)ETAProviderUpdated:(id)a0;
- (id)analyticsButtonValue;
- (id)initWithSearchAlongRoute:(BOOL)a0 ETAProvider:(id)a1 detourInfo:(id)a2 canShowDetourTime:(BOOL)a3;
- (id)preferredTintColor;

@end
