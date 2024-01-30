@class NSString, MUPlaceRibbonItemViewModel, MKMapItem, MKETAProvider;

@interface MUPlaceDistanceRibbonViewModel : MUPlaceRibbonItemViewModel <MKETAProviderObserver> {
    MKETAProvider *_etaProvider;
    MKMapItem *_mapItem;
    MUPlaceRibbonItemViewModel *_crowsDistanceViewModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)ETAProviderUpdated:(id)a0;
- (id)initWithMapItem:(id)a0 etaProvider:(id)a1;
- (id /* block */)titleStringProvider;
- (id /* block */)valueStringProvider;

@end
