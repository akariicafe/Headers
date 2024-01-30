@class NSString, NSDictionary, NSError, SSAccount;

@interface SSAuthenticateResponse : NSObject <SSXPCCoding>

@property (retain, nonatomic) SSAccount *authenticatedAccount;
@property (nonatomic) long long authenticateResponseType;
@property (nonatomic) unsigned long long credentialSource;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void)_setError:(id)a0;
- (void).cxx_destruct;

@end
