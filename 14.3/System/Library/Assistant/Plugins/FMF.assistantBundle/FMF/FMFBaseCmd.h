@class NSNumber, NSURL;

@interface FMFBaseCmd : FMJSONCommand

@property (copy, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSURL *contextIdentifierURL;

- (id)result;
- (id)init;
- (void).cxx_destruct;
- (id)headers;
- (id)jsonBodyDictionary;
- (id)jsonResponseDictionary;
- (id)staticClientContext;
- (double)minCallbackInterval;

@end
