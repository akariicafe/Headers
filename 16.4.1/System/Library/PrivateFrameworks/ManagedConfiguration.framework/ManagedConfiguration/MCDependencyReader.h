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
- (id)dependentsOfParent:(id)a0 inUserDomain:(id)a1;
- (id)parentsInDomain:(id)a0;
- (id)memberQueueDependentsOfParent:(id)a0 inUserDomain:(id)a1;
- (id)systemDomainsDict;
- (void)memberQueueRereadDomainsDict;
- (id)memberQueueParentsInUserDomain:(id)a0;
- (id)_init;
- (id)parentsInUserDomain:(id)a0;
- (id)memberQueueParentsInDomain:(id)a0;
- (void)memberQueueRereadUserDomainsDict;
- (id)memberQueueDependentsOfParent:(id)a0 inSystemDomain:(id)a1;
- (id)memberQueueDependentsOfParent:(id)a0 inDomain:(id)a1;
- (id)dependentsOfParent:(id)a0 inDomain:(id)a1;
- (id)init;
- (id)parentsInSystemDomain:(id)a0;
- (id)dependentsOfParent:(id)a0 inSystemDomain:(id)a1;
- (id)memberQueueParentsInSystemDomain:(id)a0;
- (id)userDomainsDict;
- (void).cxx_destruct;
- (void)memberQueueRereadSystemDomainsDict;

@end
