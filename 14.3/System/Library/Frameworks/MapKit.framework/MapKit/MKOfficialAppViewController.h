@class MKPlaceSectionHeaderView, NSString, MKMapItem, MKOfficialAppView;
@protocol _MKInfoCardAnalyticsDelegate;

@interface MKOfficialAppViewController : MKPlaceSectionViewController <MKOfficialAppViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>

@property (retain, nonatomic) MKOfficialAppView *officialAppView;
@property (retain, nonatomic) MKPlaceSectionHeaderView *officialAppHeaderView;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id<_MKInfoCardAnalyticsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMKMapItem:(id)a0;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (BOOL)_canShowWhileLocked;
- (void)officialAppViewDidSelectPunchOutButton:(id)a0;
- (void)setAppStoreApp:(id)a0;
- (void)_loadOfficialApp;
- (void)updateOfficialViewButtonText;
- (void)_loadAppArtwork:(id)a0;
- (void)_updateAppImage:(id)a0 error:(id)a1;
- (void)viewDidLoad;

@end
