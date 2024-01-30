@class HAPCharacteristic, NSString;

@interface HAPAccessoryReachabilityProfile : HMFObject <HAPAccessoryReachabilityProfile>

@property (retain, nonatomic) HAPCharacteristic *sleepIntervalCharacteristic;
@property (retain, nonatomic) HAPCharacteristic *pollCharacteristic;
@property (nonatomic) double sleepInterval;
@property (nonatomic) double activityInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)timeIntervalFromMillisecondNumberValue:(id)a0;

@end
