@class NSString, MRContentItemMetadataAudioFormat;

@interface MPNowPlayingInfoAudioFormat : NSObject

@property (readonly, nonatomic) MRContentItemMetadataAudioFormat *mediaRemoteAudioFormat;
@property (nonatomic) long long tier;
@property (nonatomic) long long bitrate;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long bitDepth;
@property (nonatomic) unsigned int codec;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *stableVariantID;
@property (nonatomic, getter=isSpatialized) BOOL spatialized;
@property (nonatomic, getter=isMultiChannel) BOOL multiChannel;
@property (nonatomic) unsigned int channelLayout;
@property (retain, nonatomic) NSString *audioChannelLayoutDescription;

- (id)initWithMediaRemoteAudioFormat:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;

@end
