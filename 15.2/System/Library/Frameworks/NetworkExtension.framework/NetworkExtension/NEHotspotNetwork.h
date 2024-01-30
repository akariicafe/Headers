@class NSString;

@interface NEHotspotNetwork : NSObject

@property struct __CNNetwork { } *network;
@property (readonly) NSString *interfaceName;
@property long long securityType;
@property (readonly) NSString *SSID;
@property (readonly) NSString *BSSID;

+ (void)fetchCurrentWithCompletionHandler:(id /* block */)a0;

- (double)signalStrength;
- (void)setPassword:(id)a0;
- (id)description;
- (id)initWithNetwork:(struct __CNNetwork { } *)a0 securityType:(id)a1;
- (BOOL)didAutoJoin;
- (BOOL)didJustJoin;
- (BOOL)isChosenHelper;
- (BOOL)isSecure;
- (id)initWithNetwork:(struct __CNNetwork { } *)a0;
- (void)dealloc;
- (void)setConfidence:(long long)a0;

@end
