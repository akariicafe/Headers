@class NSString, NSDate;

@interface DEDRequestRecord : NSObject

@property (retain) NSString *requestBody;
@property (retain) NSString *requestHeader;
@property (retain) NSString *responseHeader;
@property (retain) NSString *responseBody;
@property (retain) NSString *URL;
@property (retain) NSDate *date;
@property (retain) NSString *method;
@property long long runtime;
@property BOOL isFailure;

- (void).cxx_destruct;
- (id)formattedBody:(id)a0 error:(id)a1;
- (id)formattedRequestHeader:(id)a0 session:(id)a1 cookies:(id)a2;
- (id)formattedResponseHeader:(id)a0;
- (id)initWithRequest:(id)a0 response:(id)a1 session:(id)a2 cookies:(id)a3 body:(id)a4 error:(id)a5;
- (id)initWithURL:(id)a0 httpMethod:(id)a1 responseData:(id)a2;

@end
