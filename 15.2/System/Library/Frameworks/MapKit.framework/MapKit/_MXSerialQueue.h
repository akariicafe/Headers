@class NSObject;
@protocol OS_dispatch_group;

@interface _MXSerialQueue : NSObject {
    NSObject<OS_dispatch_group> *_previousTaskGroup;
}

+ (id)taskInsertionQueue;
+ (id)taskCompletionQueue;
+ (id)taskQueue;

- (void)addTask:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
