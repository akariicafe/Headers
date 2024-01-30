@interface POConfigurationVersion : NSObject {
    int _token;
    unsigned long long _version;
}

@property (readonly, nonatomic) long long version;

+ (void)reset;

- (unsigned long long)_state;
- (void)increaseVersionWithMessage:(id)a0;
- (void)dealloc;
- (id)init;
- (void)_setStateAndNotify:(unsigned long long)a0;
- (long long)checkVersion;
- (void)setPlatformSSOUnavailable;

@end
