@class NSMutableDictionary;
@protocol MSPauseManagerDelegate;

@interface MSPauseManager : NSObject {
    NSMutableDictionary *_UUIDToTimerMap;
}

@property (weak, nonatomic) id<MSPauseManagerDelegate> delegate;

+ (id)sharedManager;

- (void)pingPauseUUID:(id)a0;
- (void)_removeTimerUUID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_timerDidFire:(id)a0;
- (BOOL)isPaused;
- (void)dealloc;
- (void)unpauseUUID:(id)a0;
- (void)_addPauseUUID:(id)a0;

@end
