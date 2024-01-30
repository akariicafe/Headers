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

- (void)_setDisplayLink:(id)a0;
- (id)_displayLink;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_displayDidRefresh:(id)a0;
- (void)beginRequiringWarmUpMode;
- (void)endRequiringWarmUpMode;
- (void)removeObserverWithToken:(id)a0;
- (void)_didAddFirstObserver;
- (void)_didRemoveLastObserver;
- (BOOL)_isWarmUpModeEnabled;
- (id)_prepareUpdatedObserversForModification;
- (id)addObserverForFrameInterval:(unsigned long long)a0 handler:(id /* block */)a1;
- (id)addObserverWithHandler:(id /* block */)a0;

@end
