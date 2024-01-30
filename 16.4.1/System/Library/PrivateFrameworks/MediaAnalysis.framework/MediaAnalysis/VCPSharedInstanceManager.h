@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCPSharedInstanceManager : NSObject {
    NSObject<OS_dispatch_queue> *serialQueue_;
    NSMutableDictionary *sharedInstances_;
}

+ (id)sharedManager;

- (id)sharedInstanceWithIdentifier:(id)a0 andCreationBlock:(id /* block */)a1;
- (void)resetSharedInstanceWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;

@end
