@class NSData, MKHTTPHeaders;

@interface MKHTTPResponse : NSObject

@property (retain, nonatomic) MKHTTPHeaders *headers;
@property (retain, nonatomic) NSData *body;

- (id)responseData;
- (void).cxx_destruct;
- (id)init;

@end
