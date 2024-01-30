@class NSString;

@interface IMSystemProxySettingsFetcher : NSObject

@property (copy, nonatomic) NSString *_host;
@property (nonatomic) unsigned short _port;
@property (nonatomic) long long _proxyProtocol;
@property (copy, nonatomic) NSString *_proxyHost;
@property (nonatomic) unsigned short _proxyPort;
@property (copy, nonatomic) NSString *_proxyAccount;
@property (copy, nonatomic) NSString *_proxyPassword;
@property id delegate;

- (void).cxx_destruct;
- (void)_callAccountSettingsDelegateMethod;
- (void)_callProxySettingsDelegateMethod;
- (void)_getProxyAccountAndPasswordFromKeychain;
- (void)_takeProxySettingsFromDictionary:(struct __CFDictionary { } *)a0;
- (id)initWithHost:(id)a0 port:(unsigned short)a1 delegate:(id)a2;
- (id)initWithProxyProtocol:(long long)a0 proxyHost:(id)a1 proxyPort:(unsigned short)a2 delegate:(id)a3;
- (void)retrieveProxyAccountSettings;
- (void)retrieveProxySettings;

@end
