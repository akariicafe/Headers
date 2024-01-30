@class NSDictionary;

@interface NewsArticles.DarkModeConfiguration : NSObject <SXDarkModeConfiguration> {
    void /* unknown type, empty encoding */ headline;
}

@property (nonatomic, readonly) BOOL autoDarkModeEnabled;
@property (nonatomic, readonly) unsigned long long inversionBehavior;
@property (nonatomic, readonly) double saturationThreshold;
@property (nonatomic, readonly) NSDictionary *colors;

- (BOOL)isAutoDarkModeEnabled;
- (void).cxx_destruct;
- (id)init;

@end
