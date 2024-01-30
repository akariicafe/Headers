@class NSOutputStream, NSString, NSMutableArray, NSInputStream, NSObject;
@protocol OS_dispatch_queue;

@interface MSVStreamWriter : NSObject <NSStreamDelegate> {
    NSMutableArray *_pendingWriteDataList;
    BOOL _stopped;
    BOOL _closeOnStop;
    struct z_stream_s { char *x0; unsigned int x1; unsigned long long x2; char *x3; unsigned int x4; unsigned long long x5; char *x6; struct internal_state *x7; void /* function */ *x8; void /* function */ *x9; void *x10; int x11; unsigned long long x12; unsigned long long x13; } *_zstreamp;
}

@property (retain, nonatomic) NSOutputStream *outputStream;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long bytesWritten;
@property (nonatomic) unsigned long long maximumBufferSize;
@property (nonatomic, getter=isCompressed) BOOL compressed;
@property (copy, nonatomic) id /* block */ canWriteDataBlock;
@property (copy, nonatomic) id /* block */ didFinishWritingBlock;
@property (copy, nonatomic) id /* block */ didEncounterErrorBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void)stopWithCompletion:(id /* block */)a0;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)stop;
- (void)writeData:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithOutputStream:(id)a0 queue:(id)a1;
- (void)writeAllData:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)writeAllData:(id)a0 error:(id *)a1;
- (void)writeStreamError:(struct { long long x0; int x1; })a0;
- (BOOL)_processInput:(id)a0 generatingDecompressedData:(id *)a1;
- (void)_writeAvailablePendingData;
- (void)_onQueue_stop;

@end
