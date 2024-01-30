@class NSString;

@interface ATVHighSecurityAccountVerifyCodeResponse : AAResponse

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSString *errorTitle;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) long long errorCode;

@end
