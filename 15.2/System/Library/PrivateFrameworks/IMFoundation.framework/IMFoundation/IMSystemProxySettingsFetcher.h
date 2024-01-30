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

- (void)_callAccountSettingsDelegateMethod;
- (void)_getProxyAccountAndPasswordFromKeychain;
- (void)_callProxySettingsDelegateMethod;
- (void)_takeProxySettingsFromDictionary:(struct __CFDictionary { } *)a0;
- (id)initWithHost:(id)a0 port:(unsigned short)a1 delegate:(id)a2;
- (void)retrieveProxySettings;
- (id)initWithProxyProtocol:(long long)a0 proxyHost:(id)a1 proxyPort:(unsigned short)a2 delegate:(id)a3;
- (void)retrieveProxyAccountSettings;
- (void).cxx_destruct;

@end
