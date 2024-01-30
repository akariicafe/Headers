@class AVAssetTrack;

@interface PFVideoMetadataAudioTrackFormatInfo : NSObject {
    AVAssetTrack *_audioTrack;
    struct opaqueCMFormatDescription { } *_firstFormatDescription;
    const struct AudioFormatListItem { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *_formatListItem;
    const struct AudioChannelLayout { unsigned int x0; unsigned int x1; unsigned int x2; struct AudioChannelDescription { unsigned int x0; unsigned int x1; float x2[3]; } x3[1]; } *_channelLayout;
}

@property (readonly) BOOL channelLayoutUsesHigherOrderAmbisonics;
@property (readonly) BOOL channelLayoutUsesChannelDescriptions;
@property (readonly) long long channelCount;

+ (id)infoForFirstAudioTrackOfAsset:(id)a0 matchingCodecPredicate:(id /* block */)a1;

- (void).cxx_destruct;
- (BOOL)getHOAChannelCount:(long long *)a0 BEDChannelCount:(long long *)a1;
- (BOOL)channelLayoutUsesHOA;

@end
