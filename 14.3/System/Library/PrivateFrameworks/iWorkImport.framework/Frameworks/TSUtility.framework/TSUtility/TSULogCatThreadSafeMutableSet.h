@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TSULogCatThreadSafeMutableSet : NSObject {
    NSMutableSet *_objects;
    NSObject<OS_dispatch_queue> *_logCatQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (id)description;
- (id)immutableSet;
- (unsigned long long)count;
- (id)initWithArray:(id)a0;
- (void)addObject:(id)a0;
- (id)allObjects;
- (BOOL)containsObject:(id)a0;

@end
