@class NSString, SBPressCollector, NSUUID;
@protocol SBPressSequenceObserverDelegate;

@interface SBPressSequenceObserver : NSObject <SBPressCollectorDelegate, SBAWDMetricDelegate> {
    NSUUID *_sosTriggerUUID;
}

@property (weak, nonatomic) id<SBPressSequenceObserverDelegate> delegate;
@property (readonly, nonatomic) NSString *pressName;
@property (readonly, nonatomic) SBPressCollector *pressCollector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPressName:(id)a0;
- (void)pressCollector:(id)a0 didCollectSequence:(id)a1;
- (void)noteDidBeginSOSWithUUID:(id)a0;
- (void)metricDidPost:(id)a0 data:(id)a1;
- (void)_notePowerDownImminent;
- (void)_setPressCollector:(id)a0;

@end
