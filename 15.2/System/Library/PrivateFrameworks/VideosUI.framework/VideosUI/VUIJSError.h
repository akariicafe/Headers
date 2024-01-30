@class NSError;

@interface VUIJSError : VUIJSObject {
    VUIJSError *_jsUnderlyingError;
}

@property (readonly, nonatomic) NSError *wrappedError;

- (id)code;
- (id)userInfo;
- (id)underlyingError;
- (id)description;
- (void).cxx_destruct;
- (id)domain;
- (id)failureReason;
- (id)initWithError:(id)a0 appContext:(id)a1;
- (id)recoverySuggestion;

@end
