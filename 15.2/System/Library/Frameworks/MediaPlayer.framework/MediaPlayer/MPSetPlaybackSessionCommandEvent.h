@class NSString, NSData;

@interface MPSetPlaybackSessionCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSData *playbackSessionData;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;
- (void).cxx_destruct;

@end
