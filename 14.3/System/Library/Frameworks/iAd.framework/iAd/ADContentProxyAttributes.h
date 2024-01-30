@class NSURL, NSString;

@interface ADContentProxyAttributes : NSObject

@property (copy, nonatomic) NSURL *contentProxyURL;
@property (copy, nonatomic) NSURL *contentProxyURLConnect;
@property (copy, nonatomic) NSString *configVersion;
@property (nonatomic) long long proxyType;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)contentProxyURLConnectDidChange:(id)a0;
- (void)contentProxyURLDidChange:(id)a0;
- (void)proxyTypeDidChange:(long long)a0;
- (void)configVersionDidChange:(id)a0;

@end
