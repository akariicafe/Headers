@class NSPPrivacyProxyTokenRegistration, NSString, NSUUID, NWPath, NSDate, NSData, NSPPrivacyProxyProxyInfo, NSObject;
@protocol OS_dispatch_source, NSPProxyTokenDelegate;

@interface NSPProxyTokenInfo : NSObject <NSSecureCoding, NSCopying, NSPPrivacyProxyTokenRegistrationDelegate> {
    BOOL _tokenRequestPending;
    BOOL _tokenFetchRetryOnKeyOrNetworkChange;
    BOOL _useDefaultInterface;
    BOOL _subscriber;
    BOOL _reportTokenFetchOutage;
    id<NSPProxyTokenDelegate> _delegate;
    NSPPrivacyProxyProxyInfo *_proxyInfo;
    unsigned long long _tokenCount;
    NSPPrivacyProxyTokenRegistration *_tokenRegistration;
    NSUUID *_tokenAgentUUID;
    NWPath *_tokenPath;
    NSObject<OS_dispatch_source> *_tokenFetchRetryTimer;
    unsigned long long _tokenFetchRetryAttempt;
    NSDate *_tokenFetchRetryDate;
    unsigned long long _tokenFetchSuccessCount;
    unsigned long long _tokenConsumedCount;
    unsigned long long _tokenExpiredCount;
    unsigned long long _tokenFetchFailedCount;
    unsigned long long _agentLowWaterMarkHitCount;
    unsigned long long _cacheLowWaterMarkHitCount;
    unsigned long long _badTokenCount;
    unsigned long long _missingTokenCount;
    NSData *_networkSignature;
    NSObject<OS_dispatch_source> *_replenishTokenTimer;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reportErrorForTokenRegistration:(id)a0 error:(int)a1 withOptions:(id)a2;
- (void)dealloc;
- (void)tokenLowWaterMarkReached;
- (id)init;
- (void).cxx_destruct;

@end
