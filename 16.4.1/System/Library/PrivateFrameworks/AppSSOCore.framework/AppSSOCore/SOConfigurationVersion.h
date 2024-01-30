@interface SOConfigurationVersion : NSObject {
    long long _mode;
    int _token;
    unsigned long long _version;
}

@property (readonly, nonatomic) long long version;

+ (void)reset;

- (unsigned long long)_state;
- (void)setAppSSOUnavailable;
- (id)initWithMode:(long long)a0;
- (void)increaseVersionWithMessage:(id)a0;
- (void)dealloc;
- (void)_setStateAndNotify:(unsigned long long)a0;
- (long long)checkVersion;

@end
