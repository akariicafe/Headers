@class NSString;

@interface VCSpatialAudioIOController : NSObject <VCAudioIOControllerControl>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (void)updateClient:(id)a0;
- (void)startClient:(id)a0;
- (void)stopClient:(id)a0;

@end
