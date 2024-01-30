@class NSData, NSString;

@interface WFCoreDataAutoShortcutsPreferences : NSManagedObject

@property (retain, nonatomic) NSData *appDescriptor;
@property (copy, nonatomic) NSString *appName;
@property (retain, nonatomic) NSData *cloudKitMetadata;
@property (retain, nonatomic) NSData *disabledAutoShortcuts;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long lastSyncedHash;
@property (nonatomic) BOOL siriEnabled;
@property (nonatomic) BOOL spotlightEnabled;

+ (id)fetchRequest;

@end
