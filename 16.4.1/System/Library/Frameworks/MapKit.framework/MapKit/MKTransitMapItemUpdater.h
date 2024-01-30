@class NSTimer, MKMapItem, NSDate;
@protocol MKTransitMapItemUpdaterDelegate;

@interface MKTransitMapItemUpdater : MKTransitItemReferenceDateUpdater

@property (readonly, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id<MKTransitMapItemUpdaterDelegate> delegate;
@property (nonatomic) BOOL lastInfoRefreshFailed;
@property (nonatomic, getter=isRefreshing) BOOL refreshing;
@property (retain, nonatomic) NSTimer *dataRefreshTimer;
@property (retain, nonatomic) NSDate *suggestedDataRefreshDate;

- (void)setActive:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_isInfoExpiredRelativeToDate:(id)a0;
- (void)_processUpdatedMapItems:(id)a0 identifier:(id)a1 ttl:(double)a2 error:(id)a3;
- (void)_refreshTransitInfoIfNeeded;
- (void)_resumeDataRefreshTimer;
- (void)_scheduleDataUpdateForTransitItemAtDate:(id)a0;
- (void)_suspendDataRefreshTimer;
- (void)_transitInfoUpdated;
- (id)initWithMapItem:(id)a0 delegate:(id)a1;
- (BOOL)isStuckWithExpiredInfoRelativeToDate:(id)a0;

@end
