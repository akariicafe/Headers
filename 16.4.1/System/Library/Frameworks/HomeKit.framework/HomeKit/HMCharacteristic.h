@class NSDate, NSString, NSArray, NSUUID, NSDictionary, _HMContext, HMService, NSNumber, HMCharacteristicMetadata;

@interface HMCharacteristic : NSObject <NSSecureCoding, HMObjectMerge> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSUUID *_cachedServiceUniqueIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSDictionary *serializedDictionaryRepresentation;
@property (retain, nonatomic) _HMContext *context;
@property (readonly, nonatomic) NSNumber *instanceID;
@property (weak, nonatomic) HMService *service;
@property (copy, nonatomic) NSString *characteristicType;
@property (copy, nonatomic) NSArray *properties;
@property (nonatomic) BOOL requiresDeviceUnlock;
@property (copy, nonatomic) id value;
@property (nonatomic) BOOL notificationEnabledByThisClient;
@property (nonatomic, getter=isNotificationEnabled) BOOL notificationEnabled;
@property (copy, nonatomic) NSDate *valueUpdatedTime;
@property (copy, nonatomic) NSDate *notificationEnabledTime;
@property BOOL hasAuthorizationData;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) HMCharacteristicMetadata *metadata;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)__localizedDescriptionForCharacteristicType:(id)a0;
+ (id)_characteristicTypeAsString:(id)a0;
+ (id)characteristicWithCharacteristicReference:(id)a0 home:(id)a1;
+ (id)characteristicWithSerializedDictionaryRepresentation:(id)a0 home:(id)a1;
+ (id)localizedDescriptionForCharacteristicType:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_unconfigure;
- (id)init;
- (void).cxx_destruct;
- (void)readValueWithCompletionHandler:(id /* block */)a0;
- (void)__configureWithContext:(id)a0 service:(id)a1;
- (id)_characteristicTypeDescription;
- (void)_enableNotification:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)_mergeWithNewObject:(id)a0;
- (void)_readValueWithCompletionHandler:(id /* block */)a0;
- (void)_unconfigureContext;
- (void)_updateAuthorizationData:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateValue:(id)a0 updateTime:(id)a1 messageSentDate:(id)a2;
- (void)_writeValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)enableNotification:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)mapHAPProperties:(long long)a0;
- (void)setValueUpdateTime:(id)a0;
- (void)updateAuthorizationData:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeValue:(id)a0 completionHandler:(id /* block */)a1;

@end
