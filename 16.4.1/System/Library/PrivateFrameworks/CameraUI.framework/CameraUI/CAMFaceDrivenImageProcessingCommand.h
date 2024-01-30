@interface CAMFaceDrivenImageProcessingCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=isFaceDrivenImageProcessingEnabled) BOOL faceDrivenImageProcessingEnabled;

- (void)executeWithContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFaceDrivenImageProcessingEnabled:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
