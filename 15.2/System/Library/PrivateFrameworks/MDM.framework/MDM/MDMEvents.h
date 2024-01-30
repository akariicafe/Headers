@class NSObject;
@protocol OS_dispatch_queue;

@interface MDMEvents : NSObject {
    NSObject<OS_dispatch_queue> *_writerQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)recordDateForEvent:(id)a0;
- (void)recordData:(id)a0 forEvent:(id)a1;

@end
