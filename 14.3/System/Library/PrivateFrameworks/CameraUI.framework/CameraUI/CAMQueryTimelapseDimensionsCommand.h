@interface CAMQueryTimelapseDimensionsCommand : CAMCaptureCommand

@property (copy, nonatomic, setter=_setCompletionBlock:) id /* block */ _completionBlock;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCompletionBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
