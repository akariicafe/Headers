@class NSDictionary, NSString;

@interface RPLegacySessionMessage : NSObject

@property (copy, nonatomic) NSDictionary *message;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;

@end
