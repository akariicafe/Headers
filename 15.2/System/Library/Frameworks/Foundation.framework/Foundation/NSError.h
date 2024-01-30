@class NSString, NSDictionary, NSArray;

@interface NSError : NSObject <NSCopying, NSSecureCoding> {
    void *_reserved;
    long long _code;
    NSString *_domain;
    NSDictionary *_userInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *domain;
@property (readonly) long long code;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly, copy) NSString *localizedFailureReason;
@property (readonly, copy) NSString *localizedRecoverySuggestion;
@property (readonly, copy) NSArray *localizedRecoveryOptions;
@property (readonly) id recoveryAttempter;
@property (readonly, copy) NSString *helpAnchor;
@property (readonly, copy) NSArray *underlyingErrors;

+ (void)_web_addErrorsWithCodesAndDescriptions:(id)a0 inDomain:(id)a1;
+ (void)_setFileNameLocalizationEnabled:(BOOL)a0;
+ (void)_registerFormatter:(void /* function */ *)a0 forErrorKey:(id)a1 parameters:(const char *)a2;
+ (id)_web_errorWithDomain:(id)a0 code:(long long)a1 URL:(id)a2;
+ (void)setUserInfoValueProviderForDomain:(id)a0 provider:(id /* block */)a1;
+ (id)_web_errorWithDomain:(id)a0 code:(long long)a1 failingURL:(id)a2;
+ (id /* block */)userInfoValueProviderForDomain:(id)a0;
+ (void)_registerBuiltInFormatters;
+ (id)_readCorruptErrorWithFormat:(id)a0;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;

- (id)_formatCocoaErrorString:(id)a0 parameters:(const char *)a1 applicableFormatters:(struct **)a2 count:(long long)a3;
- (id)_web_initWithDomain_nowarn:(id)a0 code:(long long)a1 URL:(id)a2;
- (long long)_collectApplicableUserInfoFormatters:(struct **)a0 max:(long long)a1;
- (id)_cocoaErrorString:(id)a0 fromBundle:(id)a1 tableName:(id)a2;
- (id)_web_initWithDomain:(id)a0 code:(long long)a1 failingURL:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)_cocoaErrorStringWithKind:(id)a0 variant:(id)a1;
- (struct __CFString { } *)_retainedUserInfoCallBackForKey:(id)a0;
- (id)_web_failingURL;
- (id)_cocoaErrorStringWithKind:(id)a0;
- (id)_web_localizedDescription;
- (id)description;
- (BOOL)_web_errorIsInDomain:(id)a0;
- (id)_cocoaErrorString:(id)a0;
- (unsigned long long)_cfTypeID;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)redactedDescription;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;

@end
