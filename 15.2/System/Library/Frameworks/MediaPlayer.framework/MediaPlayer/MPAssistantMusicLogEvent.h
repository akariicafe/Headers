@class NSString, NSMutableDictionary;

@interface MPAssistantMusicLogEvent : NSObject <MPAssistantLogEvent>

@property (nonatomic) unsigned int sessionID;
@property (copy, nonatomic) NSString *siriSessionIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) long long eventCode;
@property (readonly, nonatomic) NSMutableDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
