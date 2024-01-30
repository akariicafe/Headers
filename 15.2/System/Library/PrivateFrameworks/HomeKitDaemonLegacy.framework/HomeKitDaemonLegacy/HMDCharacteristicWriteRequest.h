@class NSData, NSUUID;

@interface HMDCharacteristicWriteRequest : HMDCharacteristicRequest

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSData *authorizationData;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long requestType;
@property (readonly, nonatomic) BOOL includeResponseValue;
@property (readonly, nonatomic) NSData *contextData;

+ (id)logCategory;
+ (id)writeRequestWithCharacteristic:(id)a0 value:(id)a1 authorizationData:(id)a2 identifier:(id)a3 type:(unsigned long long)a4 includeResponseValue:(BOOL)a5;
+ (id)writeRequestWithCharacteristic:(id)a0 value:(id)a1 authorizationData:(id)a2 identifier:(id)a3 type:(unsigned long long)a4 includeResponseValue:(BOOL)a5 contextData:(id)a6;
+ (id)writeRequestWithCharacteristic:(id)a0 value:(id)a1 authorizationData:(id)a2 type:(unsigned long long)a3;
+ (id)writeRequestForTransitionStartWithLightProfile:(id)a0 naturalLightingEnabled:(BOOL)a1 startDate:(id)a2 type:(unsigned long long)a3 dataSource:(id)a4;
+ (id)writeRequestForTransitionStartWithLightProfile:(id)a0 naturalLightingEnabled:(BOOL)a1 startDate:(id)a2 type:(unsigned long long)a3;
+ (id)writeRequestForTransitionFetchWithLightProfile:(id)a0;
+ (id)writeRequestWithCharacteristic:(id)a0 value:(id)a1 authorizationData:(id)a2 identifier:(id)a3 type:(unsigned long long)a4;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)a0 value:(id)a1 authorizationData:(id)a2 identifier:(id)a3 type:(unsigned long long)a4 includeResponseValue:(BOOL)a5 contextData:(id)a6;

@end
