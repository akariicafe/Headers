@class NSString, TSPObjectContext, NSObject, TSPDataManager;
@protocol OS_dispatch_queue, TSPDataStorage;

@interface TSPData : NSObject {
    int _didCull;
    NSObject<OS_dispatch_queue> *_accessQueue;
    id<TSPDataStorage> _storage;
    NSString *_filename;
    TSPDataManager *_manager;
    struct array<unsigned char, 20> { unsigned char __elems_[20]; } _digest;
    BOOL _isDeallocating;
}

@property (readonly, nonatomic) long long identifier;
@property (retain, nonatomic) id<TSPDataStorage> storage;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL isReadable;
@property (readonly, nonatomic) BOOL isApplicationData;
@property (readonly, nonatomic) BOOL isExternalData;
@property (readonly, nonatomic) NSString *documentResourceLocator;
@property (readonly, nonatomic) NSString *packageLocator;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) TSPObjectContext *context;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly, nonatomic) BOOL needsDownload;
@property (readonly, nonatomic) unsigned long long encodedLength;

+ (id)null;
+ (id)dataFromReadChannel:(id)a0 filename:(id)a1 context:(id)a2;
+ (id)dataFromURL:(id)a0 useExternalReferenceIfAllowed:(BOOL)a1 context:(id)a2;
+ (id)dataFromURL:(id)a0 useExternalReferenceIfAllowed:(BOOL)a1 useFileCoordination:(BOOL)a2 context:(id)a3;
+ (id)cullingListenersQueue;
+ (id)cullingListeners;
+ (id)requiredAVAssetOptions;
+ (id)dataFromURL:(id)a0 context:(id)a1;
+ (id)dataFromNSData:(id)a0 filename:(id)a1 context:(id)a2;
+ (id)dataFromDataRep:(id)a0 filename:(id)a1 context:(id)a2;
+ (id)readOnlyDataFromURL:(id)a0 context:(id)a1;
+ (id)readOnlyDataFromNSData:(id)a0 filename:(id)a1 context:(id)a2;
+ (id)readOnlyDataFromDataRep:(id)a0 filename:(id)a1 context:(id)a2;
+ (id)readOnlyDataWithoutDataDigestFromURL:(id)a0 context:(id)a1;
+ (void)addCullingListener:(id)a0;
+ (void)removeCullingListener:(id)a0;
+ (BOOL)updateDigest:(struct array<unsigned char, 20> { unsigned char x0[20]; } *)a0 withProtobufString:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } *)a1;

- (const struct array<unsigned char, 20> { unsigned char x0[20]; } *)digest;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithContext:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)NSData;
- (BOOL)isEqual:(id)a0;
- (id)preferredFilename;
- (id)bookmarkData;
- (id)AVAsset;
- (struct CGImage { } *)newCGImage;
- (void)willCull;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)setFilename:(id)a0 storage:(id)a1;
- (id)initWithIdentifier:(long long)a0 digest:(const struct array<unsigned char, 20> { unsigned char x0[20]; } *)a1 filename:(id)a2 storage:(id)a3 manager:(id)a4;
- (struct CGDataProvider { } *)newCGDataProvider;
- (struct CGImageSource { } *)newCGImageSource;
- (id)AVAssetWithOptions:(id)a0;
- (BOOL)isLengthLikelyToBeGreaterThan:(unsigned long long)a0;
- (void)performInputStreamReadWithAccessor:(id /* block */)a0;
- (void)addDownloadObserver:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isStorageInPackage:(id)a0;

@end
