@class NSObject;
@protocol OS_dispatch_queue;

@interface PCDelegateInfo : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)setQueue:(id)a0;
- (id)queue;
- (void).cxx_destruct;

@end
