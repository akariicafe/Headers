@class NSObject, NSString, NSInputStream;
@protocol OS_dispatch_queue;

@interface MSVStreamReader : NSObject <NSStreamDelegate> {
    BOOL _closeOnStop;
    BOOL _stopped;
    struct z_stream_s { char *x0; unsigned int x1; unsigned long long x2; char *x3; unsigned int x4; unsigned long long x5; char *x6; struct internal_state *x7; void /* function */ *x8; void /* function */ *x9; void *x10; int x11; unsigned long long x12; unsigned long long x13; } *_zstreamp;
}

@property (retain, nonatomic) NSInputStream *stream;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ didReadDataBlock;
@property (copy, nonatomic) id /* block */ didFinishReadingBlock;
@property (copy, nonatomic) id /* block */ didEncounterErrorBlock;
@property (nonatomic) unsigned long long maximumBufferSize;
@property (nonatomic, getter=shouldCompress) BOOL compress;
@property (readonly, nonatomic) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopWithCompletion:(id /* block */)a0;
- (void)_stop;
- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)stop;
- (id)initWithInputStream:(id)a0 queue:(id)a1;
- (id)readAllDataWithError:(id *)a0;
- (void)readAllDataWithCompletion:(id /* block */)a0;
- (void)readAllDataIntoFileHandle:(id)a0 withCompletion:(id /* block */)a1;
- (id)_compressedDataForData:(id)a0;
- (BOOL)_shouldHandleEvent;

@end
