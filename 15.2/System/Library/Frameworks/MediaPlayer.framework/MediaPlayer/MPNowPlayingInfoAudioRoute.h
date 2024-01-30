@class MRContentItemMetadataAudioRoute, NSString;

@interface MPNowPlayingInfoAudioRoute : NSObject

@property (readonly, nonatomic) MRContentItemMetadataAudioRoute *mediaRemoteAudioRoute;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL supportsSpatialization;
@property (nonatomic, getter=isSpatializationEnabled) BOOL spatializationEnabled;

- (id)initWithMediaRemoteAudioRoute:(id)a0;
- (void).cxx_destruct;

@end
