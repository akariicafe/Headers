@class NSString, NSArray, SFUCryptoKey, NSObject;
@protocol TSUStreamReadChannel, OS_dispatch_data;

@interface TSPCryptoReadChannel : NSObject <TSUStreamReadChannel> {
    id<TSUStreamReadChannel> _readChannel;
    SFUCryptoKey *_decryptionKey;
    NSArray *_blockInfos;
    NSObject<OS_dispatch_data> *_holdData;
    char *_iv;
    unsigned long long _ivRead;
    struct _CCCryptor { } *_cryptor;
    unsigned long long _initialBytesIgnored;
    unsigned long long _remainingBlockSize;
    unsigned long long _nextBlockIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)readWithHandler:(id /* block */)a0;
- (void)readWithHandlerAndWait:(id /* block */)a0;
- (id)initWithReadChannel:(id)a0 decryptionKey:(id)a1 blockInfos:(id)a2;
- (void)_readBlocksWithHandler:(id /* block */)a0;
- (void)_resetCryptor;

@end
