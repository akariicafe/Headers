@class NSString, NSSet;

@interface CDDCloudKitRegisteredClient : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityName;

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *storePath;
@property (retain, nonatomic) NSString *storeConfigurationName;
@property (retain, nonatomic) NSString *fileProtectionType;
@property (retain, nonatomic) NSSet *scheduledActivities;
@property (retain, nonatomic) NSString *containerIdentifier;

@end
