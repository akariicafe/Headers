@class NSString;

@interface MPPostEventNoticeCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) NSString *eventType;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;
- (void).cxx_destruct;

@end
