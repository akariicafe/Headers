@class NSMutableDictionary, NSMutableData, NSObject, NSRunLoop;
@protocol OS_dispatch_queue, NSStreamDelegate;

@interface MRAVBufferedInputStream : NSInputStream {
    unsigned long long _status;
    id<NSStreamDelegate> _delegate;
    NSMutableDictionary *_properties;
    NSRunLoop *_scheduledRunLoop;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableData *_buffer;
}

- (id)init;
- (void)close;
- (id)streamError;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)handleDataReceived:(id)a0;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)initWithURL:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)initWithFileAtPath:(id)a0;
- (void)setDelegate:(id)a0;
- (void)open;
- (void)notifyDelegateOfStreamEvent:(unsigned long long)a0;
- (void)handleStreamDisconnect;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (unsigned long long)streamStatus;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)delegate;
- (BOOL)hasBytesAvailable;

@end
