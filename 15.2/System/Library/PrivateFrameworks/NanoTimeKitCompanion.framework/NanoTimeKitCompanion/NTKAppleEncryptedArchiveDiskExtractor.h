@class NSString, NSURL, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface NTKAppleEncryptedArchiveDiskExtractor : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) struct AAArchiveStream_impl { } *outputStream;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extractionQueue;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSURL *archiveURL;
@property (readonly, nonatomic) NSData *symmetricKey;
@property (readonly, nonatomic) NSURL *outputDirectoryURL;
@property (readonly, nonatomic) NSString *fileProtection;

- (void).cxx_destruct;
- (void)resume;
- (void)cancel;
- (id)initWithArchiveURL:(id)a0 symmetricKey:(id)a1 outputDirectoryURL:(id)a2 fileProtection:(id)a3 completion:(id /* block */)a4;
- (id)requiredDiskSpaceWithError:(id *)a0;

@end
