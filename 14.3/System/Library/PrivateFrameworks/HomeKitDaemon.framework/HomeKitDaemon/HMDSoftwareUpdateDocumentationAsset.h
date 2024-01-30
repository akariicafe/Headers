@class NSUUID, SZExtractor, NSURL, NSURLSession, HMSoftwareUpdateDocumentation, HMSoftwareUpdateDocumentationMetadata, NSString, NSInputStream, NSArray, NSObject;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDSoftwareUpdateDocumentationAsset : HMFObject <HMFLogging, HMFObject, NSURLSessionDownloadDelegate, SZExtractorDelegate, NSSecureCoding> {
    id<HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) NSURL *assetDirectoryURL;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURLSession *URLSession;
@property (retain, nonatomic) SZExtractor *extrator;
@property (retain, nonatomic) NSInputStream *archivedFileStream;
@property BOOL shouldAutomaticallyCache;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMSoftwareUpdateDocumentationMetadata *metadata;
@property (readonly) long long state;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) HMSoftwareUpdateDocumentation *documentation;
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

- (id)init;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void).cxx_destruct;
- (BOOL)saveWithError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (BOOL)purgeWithError:(id *)a0;
- (BOOL)isEqual:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)archiveURL;
- (void)setState:(long long)a0;
- (id)metadataURL;
- (void)cancelDownload;
- (id)logIdentifier;
- (id)bundleURL;
- (void)encodeWithCoder:(id)a0;
- (void)setExtractionProgress:(double)a0;
- (void)startCaching;
- (void)startDownload;
- (void)startUnarchive;
- (id)initWithDocumentationMetadata:(id)a0;
- (void)finishDownload;
- (void)cancelUnarchive;
- (void)finishUnarchive;

@end
