@class NSString;

@interface CertUIPrompt : NSObject {
    struct __SecTrust { } *_trust;
    id /* block */ _responseBlock;
}

@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *connectionDisplayName;

+ (id)stringForResponse:(int)a0;
+ (id)promptQueue;

- (struct __SecTrust { } *)trust;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setTrust:(struct __SecTrust { } *)a0;
- (void)showPromptWithOptions:(id)a0 responseBlock:(id /* block */)a1;
- (id)description;
- (id)_sendablePropertiesFromTrust:(struct __SecTrust { } *)a0;
- (id)_sendablePropertiesFromProperties:(id)a0;
- (id)_sendablePropertyFromProperty:(id)a0;
- (id)_copyPropertiesFromTrust:(struct __SecTrust { } *)a0;
- (void)showPromptWithResponseBlock:(id /* block */)a0;
- (id)_propertyNamed:(id)a0 ofType:(id)a1 inProperties:(id)a2;
- (id)_titleFromTrust:(struct __SecTrust { } *)a0;
- (id)_issuerFromTrust:(struct __SecTrust { } *)a0;
- (id)_subtitleFromTrust:(struct __SecTrust { } *)a0;
- (id)_purposeFromTrustProperties:(id)a0;
- (id)_expirationFromTrust:(struct __SecTrust { } *)a0;
- (BOOL)_isRootCertificateFromTrust:(struct __SecTrust { } *)a0;
- (id)_digestFromTrust:(struct __SecTrust { } *)a0;
- (int)_sendRemoteMessageWithPromptOptions:(id)a0;
- (id)_newUserInfoWithHostname:(id)a0 trust:(struct __SecTrust { } *)a1 options:(id)a2;
- (id)_messagingCenter;
- (int)_responseFromReplyDict:(id)a0;
- (int)_sendRemoteMessage;
- (void)_informConsumerOfResponse:(int)a0;
- (int)showAndWaitForResponse;

@end
