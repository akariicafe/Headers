@interface NUPlatform_iOS : NUPlatform

- (BOOL)supportsANE;
- (BOOL)defaultSupportsLiveVideoRendering;
- (id)displays;
- (id)deviceForDisplay:(id)a0;
- (id)mainDevice;
- (id)init;
- (id)mainDisplay;

@end
