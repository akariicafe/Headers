@class NSString;

@interface HMDAssistantAccessControlModifiedEvent : HMDLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long numEnabledAccessories;
@property (nonatomic) unsigned long long numCapableAccessories;

+ (void)initialize;
+ (id)uuid;
+ (id)eventWithIsEnabled:(BOOL)a0 options:(unsigned long long)a1 numEnabledAccessories:(unsigned long long)a2 numCapableAccessories:(unsigned long long)a3;

- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
