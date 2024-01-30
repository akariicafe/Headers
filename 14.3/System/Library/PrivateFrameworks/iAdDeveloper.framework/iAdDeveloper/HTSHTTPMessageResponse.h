@class NSMutableData, HTSHTTPMessageRequest, NSString;

@interface HTSHTTPMessageResponse : HTSHTTPMessage

@property (retain, nonatomic) HTSHTTPMessageRequest *request;
@property (retain, nonatomic) NSMutableData *serializedData;
@property (nonatomic) unsigned long long written;
@property (nonatomic) double sendTime;
@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *statusDescription;
@property (copy, nonatomic) NSString *trackingDescription;

- (void)dealloc;
- (struct __CFHTTPMessage { } *)copyMessage;

@end
