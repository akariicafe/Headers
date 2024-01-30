@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface CPLPlatform : NSObject {
    NSMapTable *_abstractClassToImplementation;
    NSObject<OS_dispatch_queue> *_lock;
}

@property (copy, nonatomic) NSString *suffix;

+ (void)setProxyImplementationForPlatform:(id)a0;
+ (void)setDefaultPlatform:(id)a0;
+ (id)defaultPlatform;
+ (id)currentPlatform;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)setPlatformImplementation:(Class)a0 forClass:(Class)a1;
- (Class)implementationClassForAbstractClass:(Class)a0;
- (id)newPlatformImplementationForObject:(id)a0;

@end
