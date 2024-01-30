@class NSObject;
@protocol OS_dispatch_group;

@interface _MXSerialQueue : NSObject {
    NSObject<OS_dispatch_group> *_previousTaskGroup;
}

+ (id)taskQueue;
+ (id)taskCompletionQueue;
+ (id)taskInsertionQueue;

- (void)addTask:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
