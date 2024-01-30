@interface CAMQueryTimelapseDimensionsCommand : CAMCaptureCommand

@property (copy, nonatomic, setter=_setCompletionBlock:) id /* block */ _completionBlock;

- (void)executeWithContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
