@class NSObject, NSMutableDictionary, NSRunLoop;
@protocol OS_dispatch_queue, NSStreamDelegate;

@interface MRAVBufferedOutputStream : NSOutputStream {
    unsigned long long _status;
    id<NSStreamDelegate> _delegate;
    NSMutableDictionary *_properties;
    NSRunLoop *_scheduledRunLoop;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (id)init;
- (void)close;
- (id)streamError;
- (void).cxx_destruct;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)initToFileAtPath:(id)a0 append:(BOOL)a1;
- (id)propertyForKey:(id)a0;
- (id)initToMemory;
- (id)initWithURL:(id)a0 append:(BOOL)a1;
- (void)setDelegate:(id)a0;
- (void)open;
- (void)notifyDelegateOfStreamEvent:(unsigned long long)a0;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (unsigned long long)streamStatus;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)delegate;
- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;

@end
