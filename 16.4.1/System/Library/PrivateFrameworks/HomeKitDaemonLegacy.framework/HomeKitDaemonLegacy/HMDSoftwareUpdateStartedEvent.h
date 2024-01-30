@class NSString;

@interface HMDSoftwareUpdateStartedEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isAutomaticUpdateEnabled) BOOL automaticUpdateEnabled;

+ (id)eventUpdateStartedWithAutomaticUpdateEnabled:(BOOL)a0;

- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
