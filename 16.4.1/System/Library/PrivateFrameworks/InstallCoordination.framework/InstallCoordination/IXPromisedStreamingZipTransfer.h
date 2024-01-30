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

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSeed:(id)a0;
- (void)dealloc;
- (void)resetWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)doesConsumeExtractedData;
- (void)finishStreamWithCompletionBlock:(id /* block */)a0;
- (void)prepareForExtractionToPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)supplyBytes:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)suspendStreamWithCompletionBlock:(id /* block */)a0;
- (void)terminateStreamWithError:(id)a0 completionBlock:(id /* block */)a1;
- (void)setExtractionProgress:(double)a0;
- (void)_prepareForExtractionToPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)addArchiveBytesConsumed:(unsigned long long)a0;
- (unsigned long long)archiveBytesConsumed;
- (BOOL)consumeExtractedDataIfNeeded;
- (void)extractionCompleteAtArchivePath:(id)a0;
- (void)extractionEnteredPassThroughMode;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 streamingZipOptions:(id)a2 archiveSize:(unsigned long long)a3 diskSpaceNeeded:(unsigned long long)a4;
- (void)prepareForExtraction:(id /* block */)a0;
- (Class)seedClass;
- (void)setArchiveBytesConsumed:(unsigned long long)a0;

@end
