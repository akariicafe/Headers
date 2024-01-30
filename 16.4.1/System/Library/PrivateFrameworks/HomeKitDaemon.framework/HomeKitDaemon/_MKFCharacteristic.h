@class NSUUID, NSString, NSData, NSPredicate, NSSet, _MKFService, NSArray, HMDCharacteristicMetadata, Protocol, NSDictionary, NSNumber, MKFCharacteristicDatabaseID;
@protocol MKFService, MKFHome;

@interface _MKFCharacteristic : _MKFObject <MKFCharacteristic, MKFCharacteristicPrivateExtensions>

@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) NSData *authorizationData;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSNumber *instanceID;
@property (copy, nonatomic) NSString *manufacturerDescription;
@property (copy, nonatomic) NSNumber *properties;
@property (copy, nonatomic) NSUUID *type;
@property (copy, nonatomic) NSString *units;
@property (retain, nonatomic) NSSet *bulletinRegistrations_;
@property (retain, nonatomic) NSSet *notificationRegistrations_;
@property (retain, nonatomic) _MKFService *service;
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
@property (readonly, copy, nonatomic) MKFCharacteristicDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) HMDCharacteristicMetadata *pr_hapMetadata;
@property (readonly, copy) NSDictionary *pr_dictionaryRepresentation;

+ (id)fetchRequest;

- (id)castIfCharacteristic;
- (void)pr_updateWithDictionary:(id)a0;
- (void)pr_updateWithHAPMetadata:(id)a0;

@end
