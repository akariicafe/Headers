@class NSString, NSURL, NSDictionary;

@interface MPPreloadPlaybackSessionCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) NSString *revision;
@property (readonly, nonatomic) NSURL *playbackSessionDataFilePath;
@property (readonly, nonatomic) NSDictionary *metadata;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;
- (void).cxx_destruct;

@end
