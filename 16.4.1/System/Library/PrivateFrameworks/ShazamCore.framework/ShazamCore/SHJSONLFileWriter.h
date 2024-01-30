@class NSURL;
@protocol SHDataStream;

@interface SHJSONLFileWriter : NSObject

@property (readonly, nonatomic) NSURL *destination;
@property (readonly, nonatomic) id<SHDataStream> outputStream;

+ (id)dataForJSONObjects:(id)a0 compression:(int)a1 error:(id *)a2;
+ (long long)dataCompressionFromAlgorithm:(int)a0;
+ (id)dataForJSONObject:(id)a0 error:(id *)a1;

- (BOOL)closeWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithDestination:(id)a0 compression:(int)a1;
- (BOOL)writeObject:(id)a0 error:(id *)a1;
- (void)linkDataStream:(id)a0;
- (id)streamForWritingToURL:(id)a0 withCompression:(int)a1;

@end
