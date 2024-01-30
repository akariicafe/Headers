@class NSURL, SFUCryptoKey;

@interface TSPTemporaryDataStorage : TSPFileDataStorage {
    NSURL *_URL;
    SFUCryptoKey *_decryptionKey;
}

@property (nonatomic) BOOL isMissingData;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)performReadWithAccessor:(id /* block */)a0;
- (id)initWithURL:(id)a0 decryptionKey:(id)a1;

@end
