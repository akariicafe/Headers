@class NSString;

@interface NUError : NSError

@property (readonly) NSString *nonLocalizedFailureReason;
@property (readonly) id invalidObject;

+ (id)canceledError:(id)a0 object:(id)a1;
+ (id)errorWithCode:(long long)a0 reason:(id)a1 object:(id)a2;
+ (id)errorWithCode:(long long)a0 reason:(id)a1 object:(id)a2 underlyingError:(id)a3;
+ (id)failureError:(id)a0 object:(id)a1;
+ (id)invalidError:(id)a0 object:(id)a1;
+ (id)mismatchError:(id)a0 object:(id)a1;
+ (id)missingError:(id)a0 object:(id)a1;
+ (id)resourceUnavailableError:(id)a0 object:(id)a1;
+ (id)unknownError:(id)a0 object:(id)a1;
+ (id)unsupportedError:(id)a0 object:(id)a1;
+ (id)duplicateError:(id)a0 object:(id)a1;
+ (id)extraError:(id)a0 object:(id)a1;
+ (id)rangeError:(id)a0 object:(id)a1;
+ (id)rootError:(id)a0;
+ (id)timeoutError:(id)a0 object:(id)a1;
+ (id)underlyingError:(id)a0;

- (id)description;
- (id)descriptionWithIndent:(long long)a0;
- (id)errorCodeDescription;

@end
