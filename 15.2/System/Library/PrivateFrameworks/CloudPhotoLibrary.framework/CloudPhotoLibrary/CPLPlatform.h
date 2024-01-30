@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface CPLPlatform : NSObject {
    NSMapTable *_abstractClassToImplementation;
    NSObject<OS_dispatch_queue> *_lock;
}

@property (copy, nonatomic) NSString *suffix;

+ (id)currentPlatform;
+ (id)defaultPlatform;
+ (void)setProxyImplementationForPlatform:(id)a0;
+ (void)setDefaultPlatform:(id)a0;

- (Class)implementationClassForAbstractClass:(Class)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setPlatformImplementation:(Class)a0 forClass:(Class)a1;
- (id)init;
- (id)newPlatformImplementationForObject:(id)a0;

@end
