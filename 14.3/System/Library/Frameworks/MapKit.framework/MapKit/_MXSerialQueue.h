@class NSObject;
@protocol OS_dispatch_group;

@interface _MXSerialQueue : NSObject {
    NSObject<OS_dispatch_group> *_previousTaskGroup;
}

+ (id)taskQueue;
+ (id)taskInsertionQueue;
+ (id)taskCompletionQueue;

- (id)init;
- (void).cxx_destruct;
- (void)addTask:(id /* block */)a0;

@end
