@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TSULogCatThreadSafeMutableSet : NSObject {
    NSMutableSet *_objects;
    NSObject<OS_dispatch_queue> *_logCatQueue;
}

- (BOOL)containsObject:(id)a0;
- (id)initWithArray:(id)a0;
- (id)allObjects;
- (id)description;
- (id)immutableSet;
- (void).cxx_destruct;
- (id)init;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (void)removeObject:(id)a0;

@end
