@class NSNumber, NSString;

@interface SASSetAudioDuckingDelay : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *duckingEventSyncDelay;
@property (copy, nonatomic) NSNumber *preTriggerToDuckingEndDuration;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setAudioDuckingDelay;
+ (id)setAudioDuckingDelayWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
