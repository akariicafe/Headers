@class HFItemManager, NSString, _HUQuickControlContentCharacteristicWriteQueuedUpdate;
@protocol HUQuickControlContentCharacteristicWritingDelegate;

@interface HUQuickControlContentCharacteristicWritingUpdateAdapter : NSObject <HUQuickControlContentCharacteristicWritingDelegate>

@property (retain, nonatomic) _HUQuickControlContentCharacteristicWriteQueuedUpdate *queuedUpdate;
@property (weak, nonatomic) id<HUQuickControlContentCharacteristicWritingDelegate> forwardingCharacteristicWritingDelegate;
@property (nonatomic) BOOL shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges;
@property (readonly, nonatomic) HFItemManager *itemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithItemManager:(id)a0;
- (void)quickControlContent:(id)a0 willBeginPossibleWritesForCharacteristics:(id)a1;
- (void)quickControlContent:(id)a0 didEndPossibleWritesForCharacteristics:(id)a1;
- (void)quickControlContentDidUpdateCharacteristicValueOverrides:(id)a0;
- (void)_executeQueuedUpdate;
- (id)_characteristicUpdateSuppressionReasonForContent:(id)a0;

@end
