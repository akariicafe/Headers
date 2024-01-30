@class NSURL, NSDictionary, NSPersistentStoreDescription;

@interface TBCoreDataStoreDescriptor : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSDictionary *storeOptions;
@property (readonly, nonatomic) NSPersistentStoreDescription *storeDescription;

+ (id)directStoreDescriptor;
+ (id)serverStoreDescriptor;
+ (id)clientStoreDescriptor;
+ (id)defaultModelURL;
+ (id)tempStoresDirectoryURL;
+ (id)tempStoreDescriptor;
+ (id)defaultStoresDirectoryURL;
+ (id)defaultPersistentStoreURLWithDirectory:(id)a0;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 storeURL:(id)a1 modelURL:(id)a2;

@end
