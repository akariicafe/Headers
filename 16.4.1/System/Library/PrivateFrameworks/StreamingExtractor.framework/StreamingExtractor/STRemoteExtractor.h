@class NSMutableDictionary, NSString, NSXPCConnection, NSData, STExtractionOriginator, NSObject, NSError;
@protocol OS_dispatch_queue, STExtractorDelegate;

@interface STRemoteExtractor : NSObject <STExtractionOriginatorProtocol, STExtractor, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *symmetricDecryptionKey;
@property (retain, nonatomic) NSData *asymmetricDecryptionKey;
@property (retain, nonatomic) NSData *signingPublicKey;
@property (retain, nonatomic) NSString *sourceDirectory;
@property (retain, nonatomic) NSData *archiveID;
@property (nonatomic) unsigned long long lastResumptionOffset;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *reservationQueue;
@property (readonly, nonatomic) NSXPCConnection *extractionServiceConnection;
@property (readonly, nonatomic) STExtractionOriginator *internalExtractionOriginator;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isPrepared;
@property (nonatomic) BOOL isInvalid;
@property (nonatomic) BOOL dataStreamStarted;
@property (nonatomic) BOOL finalBytesSent;
@property (nonatomic) unsigned long long requiredExtractionMemory;
@property (nonatomic) unsigned long long reservedExtractionMemory;
@property (readonly, nonatomic) BOOL suppressCompletionsDuringShutdown;
@property (readonly, nonatomic) NSMutableDictionary *options;
@property (weak, nonatomic) id<STExtractorDelegate> extractorDelegate;
@property (readonly, nonatomic) BOOL doesConsumeExtractedData;
@property (retain, nonatomic) NSString *pluginBundlePath;
@property (retain, nonatomic) NSString *pluginDirectory;
@property (retain, nonatomic) NSString *sessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)incrementalPatchSTAEAExtractor:(id)a0 srcDirectory:(id)a1;
+ (id)fullReplacementSTAEAExtractor:(id)a0;
+ (id)STAEAExtractorWithOptions:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)setOption:(id)a0 forKey:(id)a1;
- (void)_invalidate;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)finishStreamWithCompletionBlock:(id /* block */)a0;
- (void)prepareForExtractionToPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)supplyBytes:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)suspendStreamWithCompletionBlock:(id /* block */)a0;
- (void)terminateStreamWithError:(id)a0 completionBlock:(id /* block */)a1;
- (void)_sendData:(id)a0 completion:(id /* block */)a1;
- (void)_checkForInvalidExtractionMemoryReservation;
- (void)_releaseExtractionMemory;
- (id)_reserveExtractionMemory;
- (id)createOutputDir:(id)a0;
- (void)remote_extractionCompleteAtArchivePath:(id)a0;
- (void)remote_extractionEnteredPassthroughMode;
- (void)remote_setExtractionProgress:(double)a0;
- (BOOL)setSourceDirectory:(id)a0 sandboxExtension:(id)a1;

@end
