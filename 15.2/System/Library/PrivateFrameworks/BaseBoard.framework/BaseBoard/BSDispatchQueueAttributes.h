@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_queue_attr;

@interface BSDispatchQueueAttributes : NSObject <NSCopying> {
    NSObject<OS_dispatch_queue> *_targetQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue_attr> *attributes;

+ (id)serial;
+ (id)concurrent;

- (id)inactive;
- (id)autoreleaseFrequency:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)targetQueue:(id)a0;
- (id)serviceClass:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serviceClass:(unsigned int)a0 relativePriority:(int)a1;

@end
