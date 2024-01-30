@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_queue_attr;

@interface BSDispatchQueueAttributes : NSObject <NSCopying> {
    NSObject<OS_dispatch_queue> *_targetQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue_attr> *attributes;

+ (id)concurrent;
+ (id)serial;

- (id)inactive;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)targetQueue:(id)a0;
- (id)serviceClass:(unsigned int)a0 relativePriority:(int)a1;
- (id)serviceClass:(unsigned int)a0;
- (id)autoreleaseFrequency:(unsigned long long)a0;
- (void).cxx_destruct;

@end
