@class PXForYouBadgeManager, NSString;

@interface PXNavigationListActivityItemDataSectionManager : PXNavigationListItemDataSectionManager <PXChangeObserver>

@property (readonly, nonatomic) PXForYouBadgeManager *badgeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
