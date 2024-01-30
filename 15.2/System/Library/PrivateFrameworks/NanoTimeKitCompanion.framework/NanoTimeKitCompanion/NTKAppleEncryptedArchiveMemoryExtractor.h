@class NSData, NSString, NSURL, NSMutableData, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface NTKAppleEncryptedArchiveMemoryExtractor : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) struct AAArchiveStream_impl { } *outputStream;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extractionQueue;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSMutableData *outputData;
@property (retain, nonatomic) NSError *outputError;
@property (readonly, nonatomic) NSURL *archiveURL;
@property (readonly, nonatomic) NSData *symmetricKey;
@property (readonly, nonatomic) NSString *targetArchivedPath;

- (void).cxx_destruct;
- (void)resume;
- (void)cancel;
- (id)initWithArchiveURL:(id)a0 symmetricKey:(id)a1 extractingFileAtArchivedPath:(id)a2 completion:(id /* block */)a3;

@end
