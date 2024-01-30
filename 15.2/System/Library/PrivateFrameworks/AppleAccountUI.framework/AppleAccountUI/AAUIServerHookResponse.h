@class NSDictionary, NSURLRequest;

@interface AAUIServerHookResponse : NSObject

@property (copy, nonatomic) NSDictionary *additionalPayload;
@property (copy, nonatomic) NSURLRequest *continuationRequest;

- (void).cxx_destruct;

@end
