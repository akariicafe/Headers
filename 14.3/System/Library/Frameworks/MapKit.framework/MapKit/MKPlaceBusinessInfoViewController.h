@class MKPlaceSectionHeaderView, NSString, _MKPlaceBusinessInfoRow, MKMapItem;

@interface MKPlaceBusinessInfoViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {
    MKMapItem *_mapItem;
    MKPlaceSectionHeaderView *_headerView;
    _MKPlaceBusinessInfoRow *_businessInfoRow;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)mapItemHasBusinessInfoToDisplay:(id)a0;

- (void).cxx_destruct;
- (void)infoCardThemeChanged;
- (void)_updateBusinessInfo;
- (id)_imageForApplePay;
- (id)_stringForAmenity:(int)a0;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
