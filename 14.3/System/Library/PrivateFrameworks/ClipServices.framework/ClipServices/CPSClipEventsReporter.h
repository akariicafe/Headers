@class BMSource, NSObject;
@protocol OS_dispatch_queue;

@interface CPSClipEventsReporter : NSObject {
    BMSource *_source;
    NSObject<OS_dispatch_queue> *_logQueue;
}

+ (id)reporter;

- (id)init;
- (void).cxx_destruct;
- (void)logClipLaunchEventForSession:(id)a0;

@end
