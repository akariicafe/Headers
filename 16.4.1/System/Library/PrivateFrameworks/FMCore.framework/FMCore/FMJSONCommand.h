@class NSDictionary, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface FMJSONCommand : FMCommandBase

@property (nonatomic) BOOL _hasParsedResponseBody;
@property (retain, nonatomic) NSDictionary *_responseBodyDict;
@property (retain, nonatomic) NSDictionary *_requestBodyDict;
@property (retain, nonatomic) NSError *jsonResponseParseError;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue;
@property (readonly, nonatomic) NSDictionary *jsonResponseDictionary;
@property (readonly, nonatomic) NSDictionary *serverAlertInfo;

- (id)body;
- (id)headers;
- (void)sendRequest;
- (id)jsonBodyDictionary;
- (id)init;
- (void).cxx_destruct;

@end
