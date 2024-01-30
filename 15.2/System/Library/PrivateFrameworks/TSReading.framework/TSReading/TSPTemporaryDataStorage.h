@class NSURL, SFUCryptoKey;

@interface TSPTemporaryDataStorage : TSPFileDataStorage {
    NSURL *_URL;
    SFUCryptoKey *_decryptionKey;
}

@property (nonatomic) BOOL isMissingData;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)performReadWithAccessor:(id /* block */)a0;
- (id)initWithURL:(id)a0 decryptionKey:(id)a1;

@end
