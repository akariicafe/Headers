@class NSObject, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface ATXScreenRepresentation : NSObject {
    NSMutableOrderedSet *_scr;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (id)getAllObjects;
- (unsigned long long)findPosition:(id)a0;
- (void)addObject:(id)a0;

@end
