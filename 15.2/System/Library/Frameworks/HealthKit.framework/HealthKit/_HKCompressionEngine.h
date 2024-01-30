@class NSMutableData;
@protocol _HKStreamingDestination;

@interface _HKCompressionEngine : NSObject

@property (nonatomic) int operation;
@property (nonatomic) int algorithm;
@property (weak, nonatomic) id<_HKStreamingDestination> destination;
@property (retain, nonatomic) NSMutableData *destinationBuffer;
@property (nonatomic) struct { char *x0; unsigned long long x1; char *x2; unsigned long long x3; void *x4; } *stream;
@property (readonly, nonatomic) NSMutableData *sinkContent;

+ (id)processDataWithFunction:(long long)a0 algorithm:(long long)a1 content:(id)a2 progressBlock:(id /* block */)a3;

- (BOOL)_processIncomingData:(const void *)a0 length:(unsigned long long)a1 flags:(int)a2;
- (BOOL)_initializeStream;
- (void)_decodeEngineFunction:(long long)a0 algorithm:(long long)a1;
- (void)_gatherReadSinkContent:(id)a0;
- (unsigned long long)_deliverDestinationContent;
- (void).cxx_destruct;
- (id)initWithFunction:(long long)a0 algorithm:(long long)a1 destination:(id)a2;
- (void)sourceContentFinished;
- (void)writeSourceContent:(id)a0;
- (void)dealloc;

@end
