@class NSString, NSDictionary;

@interface RPRequestRegistration : NSObject

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) id /* block */ cnxHandler;

- (void).cxx_destruct;

@end
