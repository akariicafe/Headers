@interface SKSoundContext : NSObject {
    struct ALCdevice_struct { } *_device;
    struct ALCcontext_struct { } *_context;
    BOOL _suspended;
}

@property (nonatomic) double gain;
@property (nonatomic) struct CGPoint { double x0; double x1; } listenerPosition;
@property (nonatomic) BOOL suspended;

+ (id)currentContext;
+ (id)context;

- (id)init;
- (void)dealloc;
- (void)makeCurrentContext;

@end
