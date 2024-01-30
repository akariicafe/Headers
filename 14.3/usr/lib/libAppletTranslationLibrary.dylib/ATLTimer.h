@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface ATLTimer : NSObject {
    NSObject<OS_dispatch_source> *_src;
    id /* block */ _block;
    double _delay;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
