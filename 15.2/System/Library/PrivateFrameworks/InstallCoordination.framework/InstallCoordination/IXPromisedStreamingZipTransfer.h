@class IXPromisedStreamingZipTransferSeed, SZExtractor, NSString;
@protocol SZExtractorDelegate;

@interface IXPromisedStreamingZipTransfer : IXOwnedDataPromise <SZExtractorDelegate, NSSecureCoding, SZExtractor>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IXPromisedStreamingZipTransferSeed *seed;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) unsigned long long archiveBytesConsumed;
@property (retain, nonatomic) SZExtractor *extractor;
@property (nonatomic) BOOL needsConsume;
@property (readonly, nonatomic) BOOL useProgressFromSZExtractor;
@property (readonly, nonatomic) long long sandboxExtensionHandle;
@property (readonly, nonatomic) BOOL doesConsumeExtractedData;
@property (weak, nonatomic) id<SZExtractorDelegate> extractorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetWithCompletion:(id /* block */)a0;
- (void)terminateStreamWithError:(id)a0 completionBlock:(id /* block */)a1;
- (void)prepareForExtractionToPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)supplyBytes:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)finishStreamWithCompletionBlock:(id /* block */)a0;
- (void)suspendStreamWithCompletionBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSeed:(id)a0;
- (BOOL)doesConsumeExtractedData;
- (void)prepareForExtraction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (Class)seedClass;
- (unsigned long long)archiveBytesConsumed;
- (void)setArchiveBytesConsumed:(unsigned long long)a0;
- (void)_prepareForExtractionToPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)addArchiveBytesConsumed:(unsigned long long)a0;
- (void)setExtractionProgress:(double)a0;
- (void)extractionCompleteAtArchivePath:(id)a0;
- (void)extractionEnteredPassThroughMode;
- (BOOL)consumeExtractedDataIfNeeded;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 streamingZipOptions:(id)a2 archiveSize:(unsigned long long)a3 diskSpaceNeeded:(unsigned long long)a4;

@end
