@class NSURLSession, NSMutableDictionary, ASTSession, NSArray, NSString;
@protocol NSURLRequestFactory, ASTUploadClientDelegate;

@interface ASTConfigurableUploadClient : NSObject <NSURLSessionTaskDelegate, ASTUploadClient>

@property (weak) ASTSession *session;
@property (weak) id<ASTUploadClientDelegate> delegate;
@property (retain) NSMutableDictionary *taskMap;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) id<NSURLRequestFactory> urlFactory;
@property (readonly, nonatomic) NSArray *uploadStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)cancelAll;
- (void)cancelUploadWithId:(unsigned long long)a0;
- (id)initWithASTSession:(id)a0 withDelegate:(id)a1;
- (id)initWithASTSession:(id)a0 withURLSession:(id)a1 withURLRequestFactory:(id)a2 withDelegate:(id)a3;
- (id)initWithURLSession:(id)a0 withURLRequestFactory:(id)a1 withDelegate:(id)a2;
- (unsigned long long)queueUploadWithSourceData:(id)a0 andExtra:(id)a1;
- (unsigned long long)queueUploadWithSourceUrl:(id)a0 andExtra:(id)a1;
- (void)uploadTaskDidComplete:(unsigned long long)a0 withResponse:(id)a1 andError:(id)a2;
- (unsigned long long)uploadWithObject:(id)a0 andExtra:(id)a1;

@end
