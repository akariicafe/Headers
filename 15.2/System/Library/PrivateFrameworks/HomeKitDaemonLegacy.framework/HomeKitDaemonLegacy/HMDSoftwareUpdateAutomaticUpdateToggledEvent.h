@class NSString;

@interface HMDSoftwareUpdateAutomaticUpdateToggledEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)eventWithAutomaticUpdateEnabled:(BOOL)a0;

- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
