@class NSString, SBKResponseStatus, NSDictionary, NSError;

@interface SBKResponse : NSObject

@property (readonly, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) SBKResponseStatus *responseStatus;
@property (readonly, nonatomic) unsigned long long responseCode;
@property (readonly, nonatomic) NSDictionary *responseHeaderFields;
@property (readonly, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic) NSError *error;
@property (readonly) long long statusCode;
@property (readonly, copy) NSString *consoleDescription;
@property (readonly) NSError *requestError;
@property (readonly) BOOL isSuccess;
@property (readonly) BOOL isRecoverable;
@property (readonly) BOOL isError;
@property (readonly) BOOL shouldFileRadar;
@property (readonly) BOOL isGenericError;
@property (readonly) BOOL isUnsupportedClient;
@property (readonly) BOOL isAuthenticationError;
@property (readonly) BOOL isValidationError;
@property (readonly) BOOL isPuntedError;
@property (readonly) double retrySeconds;

+ (id)responseWithResponse:(id)a0;
+ (id)responseWithURLResponse:(id)a0 responseDictionary:(id)a1;
+ (id)responseWithCode:(unsigned long long)a0 headerFields:(id)a1 responseDictionary:(id)a2 MIMEType:(id)a3 error:(id)a4;

- (void).cxx_destruct;
- (id)description;
- (id)initWithCode:(unsigned long long)a0 headerFields:(id)a1 responseDictionary:(id)a2 MIMEType:(id)a3 error:(id)a4;
- (id)initWithURLResponse:(id)a0 responseDictionary:(id)a1;

@end
