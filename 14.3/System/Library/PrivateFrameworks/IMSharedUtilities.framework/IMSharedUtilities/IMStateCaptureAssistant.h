@interface IMStateCaptureAssistant : NSObject

@property (nonatomic) unsigned long long handle;

+ (unsigned long long)registerStateCaptureBlockWithObject:(id)a0 title:(id)a1 queue:(id)a2;

- (void)dealloc;
- (void)deregister;
- (id)initWithObject:(id)a0 title:(id)a1 queue:(id)a2;

@end
