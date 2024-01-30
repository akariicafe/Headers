@class NSUUID, NSString, NSData, NSArray, MKFStringCharacteristicDatabaseID, HMDCharacteristicMetadata, NSDictionary, Protocol, NSNumber;
@protocol MKFHome, MKFService;

@interface _MKFStringCharacteristic : _MKFCharacteristic <MKFStringCharacteristic, MKFStringCharacteristicPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSNumber *maximumLength;
@property (copy, nonatomic) NSNumber *maximumLength;
@property (readonly, copy, nonatomic) MKFStringCharacteristicDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (retain, nonatomic) NSData *authorizationData;
@property (copy, nonatomic) NSString *format;
@property (readonly, copy, nonatomic) NSNumber *instanceID;
@property (copy, nonatomic) NSString *manufacturerDescription;
@property (copy, nonatomic) NSNumber *properties;
@property (copy, nonatomic) NSUUID *type;
@property (copy, nonatomic) NSString *units;
@property (readonly, retain, nonatomic) NSArray *bulletinRegistrations;
@property (readonly, retain, nonatomic) NSArray *notificationRegistrations;
@property (readonly, retain, nonatomic) id<MKFService> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) HMDCharacteristicMetadata *pr_hapMetadata;
@property (readonly, copy) NSDictionary *pr_dictionaryRepresentation;

+ (id)fetchRequest;

- (id)castIfStringCharacteristic;
- (void)pr_updateWithHAPMetadata:(id)a0;

@end
