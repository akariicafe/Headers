@class PXFeedSectionInfosManager, NSString, NSDate, PXInboxAggregateDataSourceManager;

@interface PXSharedAlbumActivityHorizontalGadgetProvider : PXGadgetProvider <PXFeedSectionInfosManagerDelegate, PXForYouRankable>

@property (retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager;
@property (retain, nonatomic) PXInboxAggregateDataSourceManager *inboxDataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

- (void)_accountStoreDidChange:(id)a0;
- (void)generateGadgets;
- (void)dealloc;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)_updateGadgets;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_areSharedStreamsEnabled;
- (long long)_countOfSectionInfosToDisplay:(unsigned long long)a0;
- (id)_currentGadgetOfType:(unsigned long long)a0;
- (id)_gadgetTitle;
- (void)_navigateToSharedAlbumActivityFeed:(id)a0;
- (void)_updateGadgetTitle;
- (void)feedSectionInfosManager:(id)a0 sectionInfosDidChange:(id)a1;

@end
