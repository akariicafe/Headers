@class BMSource, NSObject;
@protocol OS_dispatch_queue;

@interface CPSClipEventsReporter : NSObject {
    BMSource *_source;
    NSObject<OS_dispatch_queue> *_logQueue;
}

+ (id)reporter;

- (void).cxx_destruct;
- (id)init;
- (void)logClipLaunchEventForSession:(id)a0;

@end
