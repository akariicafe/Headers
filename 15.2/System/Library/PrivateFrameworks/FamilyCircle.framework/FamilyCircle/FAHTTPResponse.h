@class NSHTTPURLResponse;

@interface FAHTTPResponse : NSObject

@property (readonly, nonatomic) NSHTTPURLResponse *HTTPResponse;
@property (readonly, nonatomic) id body;

- (id)initWithHTTPResponse:(id)a0 body:(id)a1;
- (void).cxx_destruct;

@end
