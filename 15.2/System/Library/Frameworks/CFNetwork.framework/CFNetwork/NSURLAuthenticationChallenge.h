@class NSURLAuthenticationChallengeInternal, NSURLResponse, NSURLCredential, NSURLProtectionSpace, NSError;
@protocol NSURLAuthenticationChallengeSender;

@interface NSURLAuthenticationChallenge : NSObject <NSSecureCoding> {
    NSURLAuthenticationChallengeInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSURLProtectionSpace *protectionSpace;
@property (readonly, copy) NSURLCredential *proposedCredential;
@property (readonly) long long previousFailureCount;
@property (readonly, copy) NSURLResponse *failureResponse;
@property (readonly, copy) NSError *error;
@property (readonly, retain) id<NSURLAuthenticationChallengeSender> sender;

+ (id)_authenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge { } *)a0 sender:(id)a1;
+ (id)_createAuthenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge { } *)a0 sender:(id)a1;

- (void)setSender:(id)a0;
- (id)_initWithListOfProtectionSpaces:(id)a0 CurrentProtectionSpace:(id)a1 proposedCredential:(id)a2 previousFailureCount:(long long)a3 failureResponse:(id)a4 error:(id)a5 sender:(id)a6;
- (struct _CFURLAuthChallenge { } *)_createCFAuthChallenge;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtectionSpace:(id)a0 proposedCredential:(id)a1 previousFailureCount:(long long)a2 failureResponse:(id)a3 error:(id)a4 sender:(id)a5;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithAuthenticationChallenge:(id)a0 sender:(id)a1;

@end
