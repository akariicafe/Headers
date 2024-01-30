@class WKWebViewConfiguration, APUnfairLock;

@interface APWebViewConfiguration : NSObject {
    WKWebViewConfiguration *_webProcessConfiguration;
    WKWebViewConfiguration *_webProcessConfigurationWithBackgroundPriority;
    WKWebViewConfiguration *_videoConfiguration;
    WKWebViewConfiguration *_videoConfigurationWithBackgroundPriority;
}

@property (readonly, nonatomic) APUnfairLock *webProcessConfigurationLock;
@property (readonly, nonatomic) APUnfairLock *webProcessConfigurationWithBackgroundPriorityLock;
@property (readonly, nonatomic) APUnfairLock *videoConfigurationLock;
@property (readonly, nonatomic) APUnfairLock *videoConfigurationWithBackgroundPriorityLock;
@property (readonly, nonatomic) WKWebViewConfiguration *webProcessConfiguration;
@property (readonly, nonatomic) WKWebViewConfiguration *webProcessConfigurationWithBackgroundPriority;
@property (readonly, nonatomic) WKWebViewConfiguration *videoConfiguration;
@property (readonly, nonatomic) WKWebViewConfiguration *videoConfigurationWithBackgroundPriority;

- (id)init;
- (void).cxx_destruct;
- (id)_injectionScriptForResource:(id)a0 injectionTime:(long long)a1;
- (id)_injectionStyleForResource:(id)a0;
- (id)_newProcessPoolWithBackgroundPriority:(BOOL)a0;
- (id)_newSharedConfigurationWithBackgroundPriority:(BOOL)a0;

@end
