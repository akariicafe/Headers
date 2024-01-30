@class BCCloudChangeTokenController, NSString, NSObject;
@protocol BDSCloudKitSupportZoneRecovery;

@interface BDSSaltVersionIdentifierManager : NSObject <BCCloudKitDatabaseZoneObserver>

@property (weak, nonatomic) NSObject<BDSCloudKitSupportZoneRecovery> *zoneDataManager;
@property (weak, nonatomic) BCCloudChangeTokenController *tokenController;
@property (copy, nonatomic) NSString *zoneName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
