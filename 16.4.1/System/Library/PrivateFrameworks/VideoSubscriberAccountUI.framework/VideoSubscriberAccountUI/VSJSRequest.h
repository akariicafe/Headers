@class NSString, NSArray;

@interface VSJSRequest : IKJSObject <VSJSRequest, NSCopying>

@property (copy, nonatomic) NSString *requestType;
@property (copy, nonatomic) NSString *requestBody;
@property (copy, nonatomic) NSString *currentAuthentication;
@property (copy, nonatomic) NSString *appleVerificationToken;
@property (copy, nonatomic) NSString *requestorVerificationToken;
@property (copy, nonatomic) NSArray *attributeNames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
