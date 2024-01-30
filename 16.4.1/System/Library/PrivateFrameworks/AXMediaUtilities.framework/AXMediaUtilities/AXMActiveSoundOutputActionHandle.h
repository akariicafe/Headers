@protocol AXMActiveSoundOutputActionHandleProvider;

@interface AXMActiveSoundOutputActionHandle : AXMOutputActionHandle

@property (retain, nonatomic) id<AXMActiveSoundOutputActionHandleProvider> handleProvider;
@property (nonatomic) float pitch;
@property (nonatomic) float rate;

- (void)stop;
- (void).cxx_destruct;
- (void)setQuantizedRate:(long long)a0;

@end
