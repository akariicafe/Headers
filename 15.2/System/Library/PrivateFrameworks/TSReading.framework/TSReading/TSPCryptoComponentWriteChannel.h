@class NSString;
@protocol TSPComponentWriteChannel;

@interface TSPCryptoComponentWriteChannel : NSObject <TSPComponentWriteChannel> {
    id<TSPComponentWriteChannel> _writeChannel;
    struct _CCCryptor { } *_cryptor;
    char *_buffer;
    struct { unsigned int ctx[96]; } _ccHmacContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)writeData:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_writeData:(id)a0 updateHmac:(BOOL)a1;
- (id)initWithWriteChannel:(id)a0 encryptionKey:(id)a1;

@end
