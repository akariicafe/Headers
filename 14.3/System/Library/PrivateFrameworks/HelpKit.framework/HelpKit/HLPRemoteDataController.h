@class NSURL, TPSURLSessionItem, NSDictionary;

@interface HLPRemoteDataController : NSObject

@property (retain, nonatomic) TPSURLSessionItem *URLSessionItem;
@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL hasLoaded;
@property (copy, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSDictionary *headerFields;

- (void)cancel;
- (void)clearData;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (void)fetchDataWithDataType:(long long)a0 identifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)processFileURLWithCompletionHandler:(id /* block */)a0;
- (void)processData:(id)a0 formattedData:(id)a1;

@end
