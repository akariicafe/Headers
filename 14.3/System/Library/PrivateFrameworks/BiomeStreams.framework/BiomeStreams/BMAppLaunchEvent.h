@class NSString, NSDateInterval;

@interface BMAppLaunchEvent : BMEventBase <BMEventBinaryStepping, BMEventTimeElapsing, BMEventAppAssociating, BMStoreData, NSSecureCoding, BMProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *launchReason;
@property (nonatomic) unsigned long long launchType;
@property (nonatomic, getter=isStarting) BOOL starting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned int dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

@end
