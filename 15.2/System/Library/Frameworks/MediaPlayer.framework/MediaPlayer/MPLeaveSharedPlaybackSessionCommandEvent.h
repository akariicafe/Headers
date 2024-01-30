@class NSString;

@interface MPLeaveSharedPlaybackSessionCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSString *sessionIdentifier;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;
- (void).cxx_destruct;

@end
