@interface AVEditSerializedOutput : NSObject

+ (void)initialize;
+ (id)sharedSerialOutput;

- (id)serializeComposition:(id)a0 containingAssetURLs:(id)a1;
- (id)serializeVideoComposition:(id)a0;
- (id)serializeAudioMix:(id)a0;
- (void)exportSerializedToURL:(id)a0 withComposition:(id)a1 andVideoComposition:(id)a2 andAudioMix:(id)a3;

@end
