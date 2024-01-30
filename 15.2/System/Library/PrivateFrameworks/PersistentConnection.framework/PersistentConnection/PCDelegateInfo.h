@class NSObject;
@protocol OS_dispatch_queue;

@interface PCDelegateInfo : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)queue;
- (void)setQueue:(id)a0;

@end
