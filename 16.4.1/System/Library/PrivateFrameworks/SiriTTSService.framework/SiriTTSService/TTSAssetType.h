@interface TTSAssetType : TTSStringEnum

@property (class, nonatomic, readonly) TTSAssetType *macintalkVoice;
@property (class, nonatomic, readonly) TTSAssetType *vocalizerVoice;
@property (class, nonatomic, readonly) TTSAssetType *combinedVoice;
@property (class, nonatomic, readonly) TTSAssetType *customVoice;
@property (class, nonatomic, readonly) TTSAssetType *gryphonVoice;
@property (class, nonatomic, readonly) TTSAssetType *voiceResources;

- (id)pathComponent;

@end
