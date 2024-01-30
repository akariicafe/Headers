@class NSOutputStream, NSString, NSData, NSMutableData, NSMutableArray, NSInputStream;

@interface JXHTTPMultipartBody : NSObject <NSStreamDelegate, JXHTTPRequestBody>

@property (retain, nonatomic) NSMutableArray *partsArray;
@property (retain, nonatomic) NSString *boundaryString;
@property (retain, nonatomic) NSData *finalBoundaryData;
@property (retain, nonatomic) NSString *httpContentType;
@property (retain, nonatomic) NSInputStream *httpInputStream;
@property (retain, nonatomic) NSOutputStream *httpOutputStream;
@property (retain, nonatomic) NSMutableData *bodyDataBuffer;
@property (nonatomic) long long httpContentLength;
@property (nonatomic) long long bytesWritten;
@property (nonatomic) unsigned long long streamBufferLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withDictionary:(id)a0;

- (void)setString:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)httpOperationWillStart:(id)a0;
- (void)httpOperationWillNeedNewBodyStream:(id)a0;
- (void)httpOperationDidFinishLoading:(id)a0;
- (void)httpOperationDidFail:(id)a0;
- (unsigned long long)loadMutableData:(id)a0 withDataInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)recreateStreamsForOperation:(id)a0;
- (void)scheduleOutputStreamOnThread:(id)a0;
- (void)setPartWithType:(int)a0 forKey:(id)a1 contentType:(id)a2 fileName:(id)a3 data:(id)a4;
- (void)addPartWithType:(int)a0 forKey:(id)a1 contentType:(id)a2 fileName:(id)a3 data:(id)a4;
- (void)addString:(id)a0 forKey:(id)a1;
- (void)addData:(id)a0 forKey:(id)a1 contentType:(id)a2 fileName:(id)a3;
- (void)setData:(id)a0 forKey:(id)a1 contentType:(id)a2 fileName:(id)a3;
- (void)addFile:(id)a0 forKey:(id)a1 contentType:(id)a2 fileName:(id)a3;
- (void)setFile:(id)a0 forKey:(id)a1 contentType:(id)a2 fileName:(id)a3;

@end
