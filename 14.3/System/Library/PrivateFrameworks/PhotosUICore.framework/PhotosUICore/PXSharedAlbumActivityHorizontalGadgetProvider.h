@class PXFeedSectionInfosManager, NSString, NSDate, PXInboxAggregateDataSourceManager;

@interface PXSharedAlbumActivityHorizontalGadgetProvider : PXGadgetProvider <PXFeedSectionInfosManagerDelegate, PXForYouRankable>

@property (retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager;
@property (retain, nonatomic) PXInboxAggregateDataSourceManager *inboxDataSourceManager;
@property (retain, nonatomic) NSDate *cachedPriorityDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly, nonatomic) long long defaultPriority;
@property (readonly, nonatomic) long long priorityType;
@property (readonly, nonatomic) unsigned long long gadgetType;

- (unsigned long long)estimatedNumberOfGadgets;
- (void)feedSectionInfosManager:(id)a0 sectionInfosDidChange:(id)a1;
- (void)generateGadgets;
- (id)_gadgetTitle;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_navigateToSharedAlbumActivityFeed:(id)a0;
- (void)_updateGadgetTitle;
- (long long)_countOfSectionInfosToDisplay:(unsigned long long)a0;
- (id)_currentGadgetOfType:(unsigned long long)a0;
- (BOOL)supportsDynamicRanking;
- (void)_updateGadgets;
- (void)resetPriorityDate;

@end
