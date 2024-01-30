@class NSFileHandle, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_io;

@interface _PASPosixPipeContext : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_io> *_readChannel;
    NSFileHandle *_writeHandle;
    BOOL _stop;
}

- (void).cxx_destruct;
- (int)setupWithSubprocessFd:(int)a0 fileActions:(void **)a1 queue:(id)a2 group:(id)a3 readErrno:(int *)a4;
- (void)startReadWithHandler:(id /* block */)a0;

@end
