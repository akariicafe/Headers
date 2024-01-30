@class ICURLPerformanceMetrics, NSURLResponse, NSData, NSURL, NSURLRequest, NSDate;

@interface ICURLResponse : NSObject {
    long long _parsedBodyResponseType;
    id _parsedBodyResponse;
}

@property (readonly, nonatomic) NSURLRequest *urlRequest;
@property (readonly, nonatomic) NSURLResponse *urlResponse;
@property (readonly, nonatomic) NSData *bodyData;
@property (readonly, nonatomic) NSURL *bodyDataURL;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) ICURLPerformanceMetrics *performanceMetrics;

- (void).cxx_destruct;
- (id)initWithURLResponse:(id)a0 urlRequest:(id)a1 bodyDataURL:(id)a2 performanceMetrics:(id)a3;
- (id)parsedBodyDictionary;
- (id)parsedBody;
- (id)parsedBodyArray;
- (void)_prepareParsedBodyResponse;
- (id)initWithURLResponse:(id)a0 urlRequest:(id)a1 bodyData:(id)a2 performanceMetrics:(id)a3;

@end
