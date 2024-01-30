@class MUPlaceRibbonItemViewModel, MKMapItem;

@interface MUPlaceDistanceRibbonViewModel : MUPlaceRibbonItemViewModel {
    MKMapItem *_mapItem;
    MUPlaceRibbonItemViewModel *_crowsDistanceViewModel;
}

- (id)initWithMapItem:(id)a0;
- (void).cxx_destruct;
- (id /* block */)titleStringProvider;
- (id /* block */)valueStringProvider;

@end
