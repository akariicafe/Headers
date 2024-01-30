@class NSString, NSDictionary, NSURL, NSDate, NSArray;

@interface CKLTrafficLogMessage : NSObject

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSDate *requestTime;
@property (retain, nonatomic) NSString *requestMethod;
@property (retain, nonatomic) NSURL *requestURL;
@property (retain, nonatomic) NSDictionary *requestHeaders;
@property (nonatomic) long long bodyStreamResetCount;
@property (retain, nonatomic) NSArray *requestObjects;
@property (nonatomic) long long responseStatus;
@property (retain, nonatomic) NSDictionary *responseHeaders;
@property (retain, nonatomic) NSArray *responseObjects;
@property (readonly, nonatomic) NSDate *responseTime;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *containerIdentifier;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithUUID:(id)a0 requestMetadata:(id)a1 requestObjects:(id)a2 bodyStreamResetCount:(long long)a3 responseMetadata:(id)a4 responseObjects:(id)a5;

@end
