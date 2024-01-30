@class NSString;

@interface PXNumberFilter : PXObservable <PXMutableNumberFilter> {
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

- (id)initWithInput:(double)a0;
- (void)setInput:(double)a0;
- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)didPerformChanges;
- (double)updatedOutput;
- (void)_setNeedsUpdate;
- (void)_setLastTime:(double)a0;
- (id)mutableChangeObject;
- (id)init;
- (void)_invalidateOutput;
- (void)_updateOutputIfNeeded;
- (double)initialOutputForInput:(double)a0;
- (void)invalidateOutput;

@end
