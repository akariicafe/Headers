@class NSString, NSError;
@protocol SFUInputStream, NSStreamDelegate;

@interface SFUReadChannelNSInputStreamAdaptor : NSInputStream <NSStreamDelegate> {
    id<SFUInputStream> _inputStream;
    id<NSStreamDelegate> _delegate;
    _Atomic unsigned long long _status;
    NSError *_streamError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)close;
- (void)open;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)setDelegate:(id)a0;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)hasBytesAvailable;
- (void).cxx_destruct;
- (id)delegate;
- (id)streamError;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (unsigned long long)streamStatus;
- (id)propertyForKey:(id)a0;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (id)initWithSFUInputStream:(id)a0;

@end
