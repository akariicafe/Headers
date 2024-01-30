@class PRPosterColor, NSString, PRPosterTimeFontConfiguration;

@interface PRImmutablePosterTitleStyleConfiguration : PRPosterTitleStyleConfiguration {
    BOOL _userConfigured;
    BOOL _alternateDateEnabled;
    PRPosterTimeFontConfiguration *_timeFontConfiguration;
    PRPosterColor *_titleColor;
    NSString *_timeNumberingSystem;
    double _contentsLuminance;
    NSString *_groupName;
}

- (id)titleColor;
- (id)initWithTimeFontConfiguration:(id)a0 titleColor:(id)a1 timeNumberingSystem:(id)a2 userConfigured:(BOOL)a3 contentsLuminance:(double)a4 alternateDateEnabled:(BOOL)a5 groupName:(id)a6;
- (BOOL)isUserConfigured;
- (double)contentsLuminance;
- (id)timeFontConfiguration;
- (id)timeNumberingSystem;
- (void).cxx_destruct;
- (BOOL)isAlternateDateEnabled;
- (id)groupName;

@end
