@class NSString, SBKResponseStatus, NSDictionary, NSError;

@interface SBKResponse : NSObject

@property (readonly, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) SBKResponseStatus *responseStatus;
@property (readonly, nonatomic) unsigned long long responseCode;
@property (readonly, nonatomic) NSDictionary *responseHeaderFields;
@property (readonly, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long statusCode;
@property (readonly, copy, nonatomic) NSString *consoleDescription;
@property (readonly, nonatomic) NSError *requestError;
@property (readonly, nonatomic) BOOL isSuccess;
@property (readonly, nonatomic) BOOL isRecoverable;
@property (readonly, nonatomic) BOOL isError;
@property (readonly, nonatomic) BOOL shouldFileRadar;
@property (readonly, nonatomic) BOOL isGenericError;
@property (readonly, nonatomic) BOOL isUnsupportedClient;
@property (readonly, nonatomic) BOOL isAuthenticationError;
@property (readonly, nonatomic) BOOL isValidationError;
@property (readonly, nonatomic) BOOL isPuntedError;
@property (readonly, nonatomic) double retrySeconds;

+ (id)responseWithResponse:(id)a0;
+ (id)responseWithCode:(unsigned long long)a0 headerFields:(id)a1 responseDictionary:(id)a2 MIMEType:(id)a3 error:(id)a4;
+ (id)responseWithURLResponse:(id)a0 responseDictionary:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCode:(unsigned long long)a0 headerFields:(id)a1 responseDictionary:(id)a2 MIMEType:(id)a3 error:(id)a4;
- (id)initWithURLResponse:(id)a0 responseDictionary:(id)a1;

@end
