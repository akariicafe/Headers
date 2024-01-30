@class NSString;

@interface MPPlaybackSessionCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *revision;
@property (readonly, nonatomic) long long priority;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;
- (void).cxx_destruct;

@end
