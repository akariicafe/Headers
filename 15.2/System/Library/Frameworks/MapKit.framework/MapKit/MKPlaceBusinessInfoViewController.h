@class MKPlaceSectionHeaderView, NSString, _MKPlaceBusinessInfoRow, MKMapItem, MKPlaceAmenitiesProvider;

@interface MKPlaceBusinessInfoViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {
    MKMapItem *_mapItem;
    MKPlaceSectionHeaderView *_headerView;
    _MKPlaceBusinessInfoRow *_businessInfoRow;
    MKPlaceAmenitiesProvider *_amenityProvider;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)mapItemHasBusinessInfoToDisplay:(id)a0;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)infoCardThemeChanged;
- (void)_updateBusinessInfo;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;

@end
