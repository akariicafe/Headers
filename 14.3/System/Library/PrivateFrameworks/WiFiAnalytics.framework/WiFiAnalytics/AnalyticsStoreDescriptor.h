@class NSURL, NSDictionary, NSPersistentStoreDescription;

@interface AnalyticsStoreDescriptor : NSObject

@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSURL *storeURL;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSDictionary *remoteStoreOptions;
@property (readonly, nonatomic) NSPersistentStoreDescription *storeDescription;

+ (id)defaultModelURL;
+ (id)directStoreDescriptor;
+ (id)serverStoreDescriptor;
+ (id)defaultPersistentStoreURL;
+ (id)applicationSupportDirectoryPath;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 storeURL:(id)a1 modelURL:(id)a2;

@end
