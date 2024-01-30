@class NSError, NSString, NSURL, NSData, NSObject, NSMutableData;
@protocol OS_dispatch_queue;

@interface NTKAppleEncryptedArchiveMemoryExtractor : NSObject {
    id /* block */ _completion;
    struct AAArchiveStream_impl { } *_outputStream;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_queue> *_extractionQueue;
    long long _state;
    NSMutableData *_outputData;
    NSError *_outputError;
}

@property (readonly, nonatomic) NSURL *archiveURL;
@property (readonly, nonatomic) NSData *symmetricKey;
@property (readonly, nonatomic) NSString *targetArchivedPath;

- (void)cancel;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithArchiveURL:(id)a0 symmetricKey:(id)a1 extractingFileAtArchivedPath:(id)a2 completion:(id /* block */)a3;

@end
