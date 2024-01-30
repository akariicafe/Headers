@class NSNumber, NSURL;

@interface FMFBaseCmd : FMJSONCommand

@property (copy, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSURL *contextIdentifierURL;

- (double)minCallbackInterval;
- (id)staticClientContext;
- (id)jsonBodyDictionary;
- (id)headers;
- (id)jsonResponseDictionary;
- (void).cxx_destruct;
- (id)init;
- (id)result;

@end
