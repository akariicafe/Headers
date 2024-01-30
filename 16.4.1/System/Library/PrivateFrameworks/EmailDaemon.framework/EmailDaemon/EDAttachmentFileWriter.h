@class NSURL, NSObject;
@protocol OS_dispatch_io, OS_dispatch_queue;

@interface EDAttachmentFileWriter : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _didClose;
    struct atomic_flag { _Atomic BOOL _Value; } _didFail;
    struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } _digestContext;
    int _fileDescriptor;
    NSURL *_tempURL;
    NSURL *_finalURL;
    unsigned long long _byteCount;
    NSObject<OS_dispatch_io> *_io;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_compressionQueue;
    id /* block */ _completion;
}

- (void)writeData:(id)a0;
- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (void)failAndClose;
- (id)initWithFinalURL:(id)a0 queue:(id)a1 compressionQueue:(id)a2 completion:(id /* block */)a3;
- (id)initWithTemporaryURL:(id)a0 finalURL:(id)a1 protection:(int)a2 queue:(id)a3 compressionQueue:(id)a4 completion:(id /* block */)a5;

@end
