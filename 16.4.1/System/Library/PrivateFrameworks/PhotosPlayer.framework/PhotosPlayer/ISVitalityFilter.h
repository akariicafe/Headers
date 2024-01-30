@class NSDate;
@protocol ISVitalitySettings;

@interface ISVitalityFilter : NSObject

@property (nonatomic, setter=_setPerformingInputChanges:) BOOL _isPerformingInputChanges;
@property (nonatomic, setter=_setPerformingOutputChanges:) BOOL _isPerformingOutputChanges;
@property (nonatomic, setter=_setOutputDidChange:) BOOL _outputDidChange;
@property (nonatomic, getter=isScrubbing) BOOL scrubbing;
@property (nonatomic) double scrubOffset;
@property (nonatomic) double playRate;
@property (readonly, nonatomic) id<ISVitalitySettings> settings;
@property (nonatomic, setter=setVisible:) BOOL isVisible;
@property (nonatomic) double visibilityOffset;
@property (nonatomic) BOOL hasTargetVisibilityOffset;
@property (nonatomic) double targetVisibilityOffset;
@property (retain, nonatomic) NSDate *estimatedScrollEndDate;
@property (nonatomic, setter=setScrolling:) BOOL isScrolling;
@property (nonatomic, setter=setDecelerating:) BOOL isDecelerating;
@property (copy, nonatomic) id /* block */ outputChangeHandler;

- (id)initWithSettings:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_invalidateOutput;
- (void)inputDidChange;
- (void)performInputChanges:(id /* block */)a0;
- (void)performOutputChanges:(id /* block */)a0;

@end
