@class NSString, AWDHomeKitValue;

@interface HMDWHASettingEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *keyPath;
@property (copy, nonatomic) AWDHomeKitValue *value;

+ (id)eventWithKeyPath:(id)a0 value:(id)a1;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
