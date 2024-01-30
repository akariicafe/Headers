@class NSString, SOAuthorizationParametersCore, NSURL, NSDictionary, NSData;

@interface SOAuthorizationParameters : NSObject {
    SOAuthorizationParametersCore *_authorizationParametersCore;
}

@property (readonly, nonatomic) SOAuthorizationParametersCore *authorizationParametersCore;
@property (copy, nonatomic) NSString *operation;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSDictionary *httpHeaders;
@property (retain, nonatomic) NSData *httpBody;
@property (retain, nonatomic) NSData *auditTokenData;
@property (nonatomic) BOOL useInternalExtensions;
@property (nonatomic) long long responseCode;

- (id)init;
- (void).cxx_destruct;

@end
