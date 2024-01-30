@class NSString, PCConnectionManager;

@interface KeepAliveManager : NSObject <PCConnectionManagerDelegate> {
    PCConnectionManager *_manager;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _keepAliveId;
    struct ImsKeepAliveDelegate { void /* function */ **x0; } *_delegate;
    BOOL _enableWakeUpOnWifi;
    BOOL _keepAliveStarted;
    struct __WiFiManagerClient { } *_wifiManagerRef;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)connectionManager:(id)a0 handleEvent:(int)a1;
- (id)initWithIdentifier:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a0 maxInterval:(double)a1 enableWakeUp:(BOOL)a2 delegate:(struct ImsKeepAliveDelegate { void /* function */ **x0; } *)a3;
- (void)startKeepAlive;
- (void)stopKeepAlive;
- (void)growKeepAliveInterval;
- (void)shrinkKeepAliveInterval;
- (void)startWakeUpOnWifi;
- (void)stopWakeUpOnWifi;

@end
