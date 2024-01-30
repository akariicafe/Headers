@class NSString;

@interface HMDAudioStreamInterfaceDataSource : HMFObject <HMDAudioStreamInterfaceDataSource>

@property (getter=isMuted) BOOL muted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAudioSessionPropertiesWithShouldAllowSystemSounds:(BOOL)a0;

@end
