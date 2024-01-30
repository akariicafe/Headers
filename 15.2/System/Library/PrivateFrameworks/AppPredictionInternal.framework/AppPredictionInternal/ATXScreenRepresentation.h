@class NSObject, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface ATXScreenRepresentation : NSObject {
    NSMutableOrderedSet *_scr;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)getAllObjects;
- (unsigned long long)findPosition:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;

@end
