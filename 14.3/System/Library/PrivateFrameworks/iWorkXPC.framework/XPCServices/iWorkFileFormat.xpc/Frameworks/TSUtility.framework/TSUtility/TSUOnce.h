@class NSObject;
@protocol OS_dispatch_queue;

@interface TSUOnce : NSObject <NSCopying> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _didPerformOnce;
}

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)performBlockOnce:(id /* block */)a0;

@end
