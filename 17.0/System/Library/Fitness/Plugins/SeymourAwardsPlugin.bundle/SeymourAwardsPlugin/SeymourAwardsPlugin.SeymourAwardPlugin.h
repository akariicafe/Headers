@class NSString;

@interface SeymourAwardsPlugin.SeymourAwardPlugin : NSObject <ACHAwardPlugin> {
    void /* unknown type, empty encoding */ pluginIdentifier;
}

@property (nonatomic, readonly) NSString *pluginIdentifier;

- (id)progressProvider;
- (id)templateAssetSource;
- (id)init;
- (void).cxx_destruct;

@end
