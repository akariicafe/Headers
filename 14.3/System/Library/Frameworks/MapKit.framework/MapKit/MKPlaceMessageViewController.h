@class NSString;
@protocol _MKPlaceItem, _MKInfoCardAnalyticsDelegate;

@interface MKPlaceMessageViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>

@property (retain, nonatomic) id<_MKPlaceItem> placeItem;
@property (weak, nonatomic) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadRow;
- (void)sectionView:(id)a0 didSelectRow:(id)a1 atIndex:(unsigned long long)a2;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (BOOL)_canShowWhileLocked;
- (id)initWithPlaceItem:(id)a0;
- (void)viewDidLoad;

@end
