@class NSString, NSURL;
@protocol MSStreamsProtocolDelegate;

@interface MSStreamsProtocol : NSObject

@property (nonatomic) id<MSStreamsProtocolDelegate> delegate;
@property (readonly, nonatomic) NSString *personID;
@property (readonly, weak, nonatomic) NSURL *putURL;
@property (readonly, weak, nonatomic) NSURL *getURL;
@property (readonly, weak, nonatomic) NSURL *resetURL;
@property (readonly, weak, nonatomic) NSURL *reauthorizeURL;
@property (readonly, weak, nonatomic) NSURL *uploadCompleteURL;
@property (readonly, weak, nonatomic) NSURL *deleteURL;

- (void)abort;
- (id)initWithPersonID:(id)a0 baseURL:(id)a1;
- (void).cxx_destruct;
- (id)deviceInfoDict;
- (void)_didFindServerSideConfigurationVersion:(id)a0;
- (void)_didReceiveRetryAfterDate:(id)a0;
- (void)_refreshAuthTokenForContext:(struct __MSSPCContext { void *x0; struct __CFString *x1; struct __CFString *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; double x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; struct CFURLConnectionClient_V1 *x11; struct _CFURLConnection *x12; struct __CFData *x13; struct __CFHTTPMessage *x14; struct __CFError *x15; } *)a0;

@end
