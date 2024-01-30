@class NSUUID, NSString, NSArray, NSURL, HMSoftwareUpdateDocumentation, HMSoftwareUpdateDocumentationMetadata, NSInputStream, NSObject;
@protocol HMSoftwareUpdateDocumentationAssetDelegate, HMSoftwareUpdateUrlSession, HMSoftwareUpdateDocumentationAssetExtractor, OS_dispatch_queue;

@interface HMSoftwareUpdateDocumentationAsset : HMFObject <HMFLogging, HMFObject, NSSecureCoding, HMSoftwareUpdateUrlSessionDelegate, HMSoftwareUpdateDocumentationAssetExtractorDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) NSURL *assetDirectoryURL;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<HMSoftwareUpdateUrlSession> URLSession;
@property (retain, nonatomic) id<HMSoftwareUpdateDocumentationAssetExtractor> extractor;
@property (retain, nonatomic) NSInputStream *archivedFileStream;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMSoftwareUpdateDocumentationMetadata *metadata;
@property (readonly) BOOL shouldAutomaticallyCache;
@property (readonly) long long state;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) HMSoftwareUpdateDocumentation *documentation;
@property (weak) id<HMSoftwareUpdateDocumentationAssetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;
+ (id)assetWithURL:(id)a0;

- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (id)bundleURL;
- (void)cancelDownload;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (BOOL)saveWithError:(id *)a0;
- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)metadataURL;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (id)archiveURL;
- (void)cancelUnarchive;
- (void)finishUnarchive;
- (BOOL)documentationIsCached;
- (void)finishDownload;
- (id)initWithDocumentationMetadata:(id)a0;
- (id)initWithDocumentationMetadata:(id)a0 urlSession:(id)a1 extractor:(id)a2;
- (void)setExtractionProgress:(double)a0;
- (void)startCaching;
- (void)startDownload;
- (void)startUnarchive;
- (BOOL)stateNeedsNotification;

@end
