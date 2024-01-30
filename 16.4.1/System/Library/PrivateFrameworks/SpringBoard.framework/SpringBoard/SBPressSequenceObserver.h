@class NSString, SBPressCollector, NSUUID;

@interface SBPressSequenceObserver : NSObject {
    NSUUID *_sosTriggerUUID;
}

@property (readonly, nonatomic) NSString *pressName;
@property (readonly, nonatomic) SBPressCollector *pressCollector;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_notePowerDownImminent;
- (void)_setPressCollector:(id)a0;
- (id)initWithPressName:(id)a0;
- (void)noteDidBeginSOSWithUUID:(id)a0;
- (void)pressCollector:(id)a0 didCollectSequence:(id)a1;

@end
