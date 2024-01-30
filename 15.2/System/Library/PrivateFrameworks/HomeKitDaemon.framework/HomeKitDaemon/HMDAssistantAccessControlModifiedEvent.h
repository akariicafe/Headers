@class NSString;

@interface HMDAssistantAccessControlModifiedEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL areActivityNotificationsEnabledForPersonalRequests;
@property (nonatomic) unsigned long long numEnabledAccessories;
@property (nonatomic) unsigned long long numCapableAccessories;

+ (id)eventWithIsEnabled:(BOOL)a0 options:(unsigned long long)a1 areActivityNotificationsEnabledForPersonalRequests:(BOOL)a2 numEnabledAccessories:(unsigned long long)a3 numCapableAccessories:(unsigned long long)a4;

- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
