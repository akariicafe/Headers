@class CNContact, NSString, TLKLabel, FMFMapViewController;

@interface SearchUIFindMyCardSectionView : SearchUICardSectionView <FMFMapViewControllerDelegate>

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) FMFMapViewController *viewController;
@property (retain, nonatomic) TLKLabel *locationLabel;
@property (retain, nonatomic) TLKLabel *timeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateAppearance;
- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)annotationContactForHandle:(id)a0;
- (void)fmfMapViewController:(id)a0 didReceiveLocation:(id)a1;
- (id)setupContentView;
- (id)embeddedViewController;

@end
