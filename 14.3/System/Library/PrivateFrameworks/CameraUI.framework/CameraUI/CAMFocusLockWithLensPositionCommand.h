@interface CAMFocusLockWithLensPositionCommand : CAMCaptureCommand

@property (nonatomic, setter=_setLensPosition:) float _lensPosition;
@property (copy, nonatomic, setter=_setCompletionBlock:) id /* block */ _completionBlock;

+ (float)currentLensPositionSentinel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLensPosition:(float)a0 completionBlock:(id /* block */)a1;

@end
