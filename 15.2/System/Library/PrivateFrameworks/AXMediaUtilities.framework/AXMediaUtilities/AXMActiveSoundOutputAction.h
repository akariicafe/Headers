@class AXMActiveSoundOutputActionHandle;

@interface AXMActiveSoundOutputAction : AXMSoundOutputAction

@property (readonly, nonatomic) AXMActiveSoundOutputActionHandle *handle;

- (id)initWithURL:(id)a0;
- (id)initWithSoundID:(id)a0;

@end
