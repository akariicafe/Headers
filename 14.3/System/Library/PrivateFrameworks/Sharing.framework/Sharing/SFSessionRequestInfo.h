@class NSString, NSDictionary;

@interface SFSessionRequestInfo : NSObject

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSDictionary *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;

@end
