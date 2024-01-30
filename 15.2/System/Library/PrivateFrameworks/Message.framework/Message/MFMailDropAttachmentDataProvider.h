@class NSString, NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface MFMailDropAttachmentDataProvider : MFAttachmentLibraryDataProvider <EFLoggable, NSURLSessionDownloadDelegate> {
    NSMutableDictionary *_requests;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (id)initWithLibrary:(id)a0;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didResumeAtOffset:(long long)a2 expectedTotalBytes:(long long)a3;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)fetchDataForAttachment:(id)a0 consumer:(id)a1 progress:(id)a2 completion:(id /* block */)a3;
- (id)_defaultDownloadSessionForAttachment:(id)a0;

@end
