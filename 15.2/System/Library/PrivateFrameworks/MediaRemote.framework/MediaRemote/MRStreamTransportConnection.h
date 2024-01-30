@class NSOutputStream, NSString, NSInputStream, NSRunLoop;

@interface MRStreamTransportConnection : MRExternalDeviceTransportConnection <NSStreamDelegate> {
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSRunLoop *_runLoop;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)runLoop;
- (void)setRunLoop:(id)a0;
- (void)close;
- (void)_openStream:(id)a0;
- (void)_closeAllStreams;
- (void)_stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)_setQOSPropertiesOnStream:(id)a0;
- (void)_closeStream:(id)a0;
- (id)initWithInputStream:(id)a0 outputStream:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)sendTransportData:(id)a0 options:(id)a1;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (BOOL)isValid;

@end
