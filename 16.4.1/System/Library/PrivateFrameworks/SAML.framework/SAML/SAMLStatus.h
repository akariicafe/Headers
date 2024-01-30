@class SAMLStatusCode, NSString;

@interface SAMLStatus : SAMLBaseElement

@property (readonly, nonatomic) SAMLStatusCode *statusCode;
@property (readonly, nonatomic) NSString *statusMessage;
@property (readonly, nonatomic) NSString *statusDetail;

+ (id)createElement:(id *)a0;

- (id)status;

@end
