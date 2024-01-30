@class CADisplayLink, NSMutableDictionary;

@interface TKDisplayLinkManager : NSObject {
    CADisplayLink *_displayLink;
    NSMutableDictionary *_activeObservers;
    NSMutableDictionary *_updatedObservers;
    BOOL _hasUpdatedObservers;
    BOOL _isHandlingDisplayRefresh;
    unsigned long long _warmUpModeRequirementsCount;
}

@property (class, readonly, nonatomic) TKDisplayLinkManager *currentDisplayLinkManager;

@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double timestamp;

+ (void)_releaseCurrentDisplayLinkManager;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_displayLink;
- (void)_displayDidRefresh:(id)a0;
- (void)beginRequiringWarmUpMode;
- (void)endRequiringWarmUpMode;
- (void)_setDisplayLink:(id)a0;
- (void)removeObserverWithToken:(id)a0;
- (id)addObserverForFrameInterval:(unsigned long long)a0 handler:(id /* block */)a1;
- (id)_prepareUpdatedObserversForModification;
- (void)_didAddFirstObserver;
- (void)_didRemoveLastObserver;
- (BOOL)_isWarmUpModeEnabled;
- (id)addObserverWithHandler:(id /* block */)a0;

@end
