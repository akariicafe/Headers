@class NSString;

@interface HMDConfigurationResetLogEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationReset;

- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
