@class NSMutableDictionary, MPCPlaybackEngine, NSMutableSet, NSString;

@interface _MPCLeaseManager : NSObject <MPCPlaybackEngineEventObserving>

@property (retain, nonatomic) NSMutableSet *leaseEndIgnoreReasons;
@property (retain, nonatomic) NSMutableDictionary *prepareCompletions;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlaybackEngine:(id)a0;
- (void)beginIgnoringLeaseEndEventsForReason:(id)a0;
- (void)_updateStateForPlaybackPrevention;
- (void)_itemShouldPreventPlaybackDidChangeNotification:(id)a0;
- (void)prepareForCurrentItemPlayback;
- (void)dealloc;
- (void)getHasPreparedLeaseForAccount:(id)a0 completion:(id /* block */)a1;
- (void)endIgnoringLeaseEndEventsForReason:(id)a0;
- (void)setCanStealLeaseIfNeeded;
- (void)engine:(id)a0 willChangeToItem:(id)a1 fromItem:(id)a2;
- (void)prepareForPlaybackWithAccount:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
