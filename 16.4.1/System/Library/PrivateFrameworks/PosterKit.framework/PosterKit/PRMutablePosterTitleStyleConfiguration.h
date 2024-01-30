@class PRPosterColor, NSString, PRPosterTimeFontConfiguration;

@interface PRMutablePosterTitleStyleConfiguration : PRPosterTitleStyleConfiguration

@property (copy, nonatomic) PRPosterTimeFontConfiguration *timeFontConfiguration;
@property (copy, nonatomic) PRPosterColor *titleColor;
@property (copy, nonatomic) NSString *timeNumberingSystem;
@property (nonatomic) double contentsLuminance;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic, getter=isUserConfigured) BOOL userConfigured;
@property (nonatomic, getter=isAlternateDateEnabled) BOOL alternateDateEnabled;

- (id)initWithTimeFontConfiguration:(id)a0 titleColor:(id)a1 timeNumberingSystem:(id)a2 userConfigured:(BOOL)a3 contentsLuminance:(double)a4 alternateDateEnabled:(BOOL)a5 groupName:(id)a6;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
