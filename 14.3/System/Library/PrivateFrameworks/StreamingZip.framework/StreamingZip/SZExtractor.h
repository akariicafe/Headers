@class NSDictionary, NSString, NSXPCConnection, SZExtractorInternalDelegate, StreamingUnzipper, NSObject, NSError;
@protocol OS_dispatch_queue, SZExtractorDelegate;

@interface SZExtractor : NSObject <SZExtractor, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long lastResumptionOffset;
@property (readonly, nonatomic) NSXPCConnection *unzipServiceConnection;
@property (readonly, nonatomic) StreamingUnzipper *inProcessUnzipper;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) SZExtractorInternalDelegate *internalExtractorDelegate;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL isLocalExtractor;
@property (nonatomic) BOOL needsPreparation;
@property (nonatomic) BOOL hasHadPostSetupMethodsCalled;
@property (copy, nonatomic) NSString *extractionPath;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (weak, nonatomic) id<SZExtractorDelegate> extractorDelegate;
@property (weak, nonatomic) id<SZExtractorDelegate> delegate;
@property (readonly, nonatomic) BOOL doesConsumeExtractedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)knownSZExtractorImplementations;
+ (void)enableDebugLogging;

- (id)initWithOptions:(id)a0;
- (void)terminateStreamWithError:(id)a0 completionBlock:(id /* block */)a1;
- (void)prepareForExtractionToPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)suspendStreamWithCompletionBlock:(id /* block */)a0;
- (id)init;
- (void)supplyBytes:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)finishStreamWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)prepareForExtraction:(id /* block */)a0;
- (void)_invalidateObject;
- (BOOL)doesConsumeExtractedData;
- (id)initWithPath:(id)a0 options:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setActiveExtractorDelegateMethods:(int)a0;
- (BOOL)consumeExtractedDataIfNeeded;
- (BOOL)_isValidObject;
- (void)_suspendStreamWithCompletionBlockSynchronously:(BOOL)a0 completion:(id /* block */)a1;
- (void)_setUpWithPath:(id)a0 options:(id)a1;
- (id)initWithPath:(id)a0 options:(id)a1 resumptionOffset:(unsigned long long *)a2;
- (BOOL)_synchronouslyPrepareForExtractionAtOffset:(unsigned long long *)a0;
- (void)_prepareForExtractionSynchronously:(BOOL)a0 withCompletionBlock:(id /* block */)a1;
- (void)_prepareForLocalExtraction:(id /* block */)a0;
- (void)_prepareForRemoteExtractionSynchronously:(BOOL)a0 withCompletionBlock:(id /* block */)a1;
- (id)initWithPath:(id)a0 resumptionOffset:(unsigned long long *)a1;
- (id)initWithPath:(id)a0 md5Hashes:(id)a1 hashedChunkSize:(unsigned long long)a2 resumptionOffset:(unsigned long long *)a3;
- (id)initForRemoteExtractionWithPath:(id)a0 options:(id)a1 resumptionOffset:(unsigned long long *)a2;
- (id)initForLocalExtractionWithPath:(id)a0 options:(id)a1 resumptionOffset:(unsigned long long *)a2;

@end
