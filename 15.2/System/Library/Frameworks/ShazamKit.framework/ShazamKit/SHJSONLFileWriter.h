@class NSURL;
@protocol SHDataStream;

@interface SHJSONLFileWriter : NSObject

@property (readonly, nonatomic) NSURL *destination;
@property (readonly, nonatomic) id<SHDataStream> outputStream;

+ (id)dataForJSONObject:(id)a0 error:(id *)a1;

- (BOOL)closeWithError:(id *)a0;
- (void).cxx_destruct;
- (id)streamForWritingToURL:(id)a0 withCompression:(BOOL)a1;
- (void)linkDataStream:(id)a0;
- (id)initWithDestination:(id)a0 compression:(BOOL)a1;
- (BOOL)writeObject:(id)a0 error:(id *)a1;

@end
