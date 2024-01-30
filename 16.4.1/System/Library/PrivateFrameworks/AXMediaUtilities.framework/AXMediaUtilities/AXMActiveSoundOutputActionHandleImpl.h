@class AXMSoundComponent, NSString, AXMActiveSound;

@interface AXMActiveSoundOutputActionHandleImpl : NSObject <AXMActiveSoundOutputActionHandleProvider>

@property (weak, nonatomic) AXMActiveSound *activeSound;
@property (weak, nonatomic) AXMSoundComponent *soundComponent;
@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
