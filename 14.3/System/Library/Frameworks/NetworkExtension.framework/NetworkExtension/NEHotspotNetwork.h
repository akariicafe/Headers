@class NSString;

@interface NEHotspotNetwork : NSObject

@property struct __CNNetwork { } *network;
@property (readonly) NSString *interfaceName;
@property (readonly) NSString *SSID;
@property (readonly) NSString *BSSID;

+ (void)fetchCurrentWithCompletionHandler:(id /* block */)a0;

- (BOOL)isSecure;
- (BOOL)didAutoJoin;
- (BOOL)didJustJoin;
- (BOOL)isChosenHelper;
- (void)dealloc;
- (void)setPassword:(id)a0;
- (void)setConfidence:(long long)a0;
- (id)description;
- (double)signalStrength;
- (id)initWithNetwork:(struct __CNNetwork { } *)a0;

@end
