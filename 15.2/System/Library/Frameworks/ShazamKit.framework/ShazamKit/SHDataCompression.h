@class NSString;
@protocol SHDataStream;

@interface SHDataCompression : NSObject <SHDataStream>

@property (readonly, nonatomic) struct { char *dst_ptr; unsigned long long dst_size; char *src_ptr; unsigned long long src_size; void *state; } stream;
@property (nonatomic) int operation;
@property (nonatomic) int algorithm;
@property (retain, nonatomic) id<SHDataStream> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)closeWithError:(id *)a0;
- (id)initWithOperation:(int)a0;
- (BOOL)setup;
- (void).cxx_destruct;
- (BOOL)processData:(id)a0 error:(id *)a1;
- (id)initWithOperation:(int)a0 algorithm:(int)a1;
- (BOOL)performOperation:(int)a0 withData:(id)a1 algorithm:(int)a2 flags:(int)a3 error:(id *)a4;
- (BOOL)processFileAtURL:(id)a0 error:(id *)a1;

@end
