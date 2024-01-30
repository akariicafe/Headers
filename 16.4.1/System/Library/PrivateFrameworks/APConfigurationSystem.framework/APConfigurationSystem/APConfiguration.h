@class NSString, NSDictionary;
@protocol APPurgeableCacheNotifierP;

@interface APConfiguration : NSObject <APConfigurationProtocol>

@property (class, readonly, nonatomic) NSString *configSystemDirectoryPath;
@property (class, readonly, nonatomic) NSString *path;

@property (retain, nonatomic) NSDictionary *configDictionary;
@property (retain, nonatomic) id<APPurgeableCacheNotifierP> notifier;
@property (readonly, nonatomic) BOOL isDead;
@property (readonly, nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *identifier;

@end
