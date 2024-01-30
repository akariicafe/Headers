@protocol AXMActiveSoundOutputActionHandleProvider;

@interface AXMActiveSoundOutputActionHandle : AXMOutputActionHandle

@property (retain, nonatomic) id<AXMActiveSoundOutputActionHandleProvider> handleProvider;
@property (nonatomic) float pitch;
@property (nonatomic) float rate;

- (void).cxx_destruct;
- (void)stop;
- (void)setQuantizedRate:(long long)a0;

@end
