@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MCDependencyReader : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSMutableDictionary *memberQueueSystemDomainsDict;
@property (retain, nonatomic) NSMutableDictionary *memberQueueUserDomainsDict;

+ (id)sharedReader;
+ (id)systemStoragePath;
+ (id)userStoragePath;
+ (void)setSystemStoragePath:(id)a0 userStoragePath:(id)a1;

- (void)invalidateCache;
- (id)init;
- (void).cxx_destruct;
- (void)memberQueueRereadSystemDomainsDict;
- (void)memberQueueRereadUserDomainsDict;
- (id)memberQueueDependentsOfParent:(id)a0 inSystemDomain:(id)a1;
- (id)memberQueueDependentsOfParent:(id)a0 inUserDomain:(id)a1;
- (id)memberQueueParentsInDomain:(id)a0;
- (id)memberQueueDependentsOfParent:(id)a0 inDomain:(id)a1;
- (id)memberQueueParentsInSystemDomain:(id)a0;
- (id)memberQueueParentsInUserDomain:(id)a0;
- (id)userDomainsDict;
- (id)systemDomainsDict;
- (id)parentsInDomain:(id)a0;
- (id)dependentsOfParent:(id)a0 inDomain:(id)a1;
- (id)parentsInSystemDomain:(id)a0;
- (id)parentsInUserDomain:(id)a0;
- (id)dependentsOfParent:(id)a0 inSystemDomain:(id)a1;
- (id)dependentsOfParent:(id)a0 inUserDomain:(id)a1;
- (void)memberQueueRereadDomainsDict;
- (id)_init;

@end
