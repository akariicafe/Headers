@class NSString, NSError;

@interface SBKResponseStatus : NSObject

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

+ (id)responseStatusForStatusCodeNumber:(id)a0;

- (void).cxx_destruct;
- (id)initWithStatus:(long long)a0 isRecoverable:(BOOL)a1 isError:(BOOL)a2 consoleDescription:(id)a3 shouldFileRadar:(BOOL)a4;

@end
