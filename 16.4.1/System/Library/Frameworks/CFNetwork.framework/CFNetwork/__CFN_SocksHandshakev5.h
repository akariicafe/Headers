@class NSMutableSet, NSMutableString;

@interface __CFN_SocksHandshakev5 : __CFN_SocksHandshake {
    BOOL _done;
    unsigned long long _state;
    int _numberOfAuthVersionSupported;
    NSMutableSet *_authMethods;
    unsigned char _addressType;
    int _destinationLen;
    NSMutableString *_domainName;
    unsigned char ipaddr[16];
    int _portLen;
    unsigned short _destPort;
    int _usernameLen;
    NSMutableString *_username;
    int _passwordLen;
    NSMutableString *_password;
}

- (id)finish:(int)a0;
- (void).cxx_destruct;
- (BOOL)parse:(const char *)a0 len:(long long)a1 completion:(id /* block */)a2;

@end
