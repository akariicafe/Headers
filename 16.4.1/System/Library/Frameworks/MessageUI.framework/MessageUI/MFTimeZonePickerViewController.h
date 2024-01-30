@class NSTimeZone, NSArray, UICollectionViewDiffableDataSource, UICollectionView, NSString, NSObject;
@protocol OS_os_log, MFTimeZonePickerViewControllerDelegate;

@interface MFTimeZonePickerViewController : UIViewController <UISearchResultsUpdating, UICollectionViewDelegate, EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSArray *currentFilteredTimeZones;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSTimeZone *currentTimeZone;
@property (retain, nonatomic) NSString *currentCityName;
@property (weak, nonatomic) id<MFTimeZonePickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSearchResultsForSearchController:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)createCollectionViewLayout;
- (id)initWithTimeZone:(id)a0;
- (void)updateCurrentTimeZoneCity:(id)a0;

@end
