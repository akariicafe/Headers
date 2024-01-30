@class NSString;

@interface PSUIVPNStateSnapshot : NSObject

@property (nonatomic) unsigned long long _vpnSettingsVisibilityStyle;
@property (nonatomic) unsigned long long _vpnConnectivityState;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, copy, nonatomic) NSString *primaryText;
@property (readonly, copy, nonatomic) NSString *secondaryText;

+ (id)na_identity;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithVisibilityStyle:(unsigned long long)a0 connectivityState:(unsigned long long)a1;
- (void).cxx_destruct;

@end
