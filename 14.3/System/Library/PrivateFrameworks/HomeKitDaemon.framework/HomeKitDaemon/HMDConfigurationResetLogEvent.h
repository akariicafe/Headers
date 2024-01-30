@class NSString;

@interface HMDConfigurationResetLogEvent : HMDLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uuid;
+ (id)configurationReset;

- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
