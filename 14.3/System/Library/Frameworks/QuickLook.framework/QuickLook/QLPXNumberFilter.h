@class NSString;

@interface QLPXNumberFilter : QLPXObservable <QLPXMutableNumberFilter> {
    struct { BOOL output; } _needsUpdateFlags;
}

@property (nonatomic, setter=_setOutput:) double output;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double lastTime;
@property (readonly, nonatomic) double input;
@property (nonatomic) double time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithInput:(double)a0;
- (void)_setNeedsUpdate;
- (void)invalidateOutput;
- (void)_invalidateOutput;
- (void)_updateOutputIfNeeded;
- (void)didPerformChanges;
- (double)initialOutputForInput:(double)a0;
- (BOOL)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (id)mutableChangeObject;
- (void)setInput:(double)a0;
- (double)updatedOutput;
- (void)_setLastTime:(double)a0;

@end
