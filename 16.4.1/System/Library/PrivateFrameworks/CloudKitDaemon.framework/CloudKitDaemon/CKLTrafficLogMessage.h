@class NSString, NSDictionary, NSURL, NSDate, NSArray;

@interface CKLTrafficLogMessage : NSObject

@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSDate *requestTime;
@property (readonly, copy, nonatomic) NSString *requestMethod;
@property (readonly, copy, nonatomic) NSURL *requestURL;
@property (readonly, copy, nonatomic) NSDictionary *requestHeaders;
@property (readonly, nonatomic) long long bodyStreamResetCount;
@property (readonly, copy, nonatomic) NSArray *requestObjects;
@property (readonly, nonatomic) long long responseStatus;
@property (readonly, copy, nonatomic) NSDate *responseTime;
@property (readonly, copy, nonatomic) NSDictionary *responseHeaders;
@property (readonly, copy, nonatomic) NSArray *responseObjects;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;

- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 requestMetadata:(id)a1 requestObjects:(id)a2 bodyStreamResetCount:(long long)a3 responseMetadata:(id)a4 responseObjects:(id)a5;

@end
