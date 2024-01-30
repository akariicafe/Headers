@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TSULogCatThreadSafeMutableSet : NSObject {
    NSMutableSet *_objects;
    NSObject<OS_dispatch_queue> *_logCatQueue;
}

- (void)addObject:(id)a0;
- (id)initWithArray:(id)a0;
- (void)removeObject:(id)a0;
- (unsigned long long)count;
- (id)immutableSet;
- (id)allObjects;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;

@end
