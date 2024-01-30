@class NSString, NSURL, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface NTKAppleEncryptedArchiveDiskExtractor : NSObject {
    id /* block */ _completion;
    struct AAArchiveStream_impl { } *_outputStream;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_queue> *_extractionQueue;
    long long _state;
}

@property (readonly, nonatomic) NSURL *archiveURL;
@property (readonly, nonatomic) NSData *symmetricKey;
@property (readonly, nonatomic) NSURL *outputDirectoryURL;
@property (readonly, nonatomic) NSString *fileProtection;

- (void)cancel;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithArchiveURL:(id)a0 symmetricKey:(id)a1 outputDirectoryURL:(id)a2 fileProtection:(id)a3 completion:(id /* block */)a4;
- (id)requiredDiskSpaceWithError:(id *)a0;
- (BOOL)verifyExtractedContentsWithError:(id *)a0;

@end
