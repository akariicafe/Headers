@class NSDictionary, NSString;

@interface SXDarkModeConfiguration : NSObject <SXDarkModeConfiguration>

@property (readonly, nonatomic, getter=isAutoDarkModeEnabled) BOOL autoDarkModeEnabled;
@property (readonly, copy, nonatomic) NSDictionary *colors;
@property (readonly, nonatomic) unsigned long long inversionBehavior;
@property (readonly, nonatomic) double saturationThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAutoDarkModeEnabled:(BOOL)a0 inversionBehavior:(unsigned long long)a1 saturationThreshold:(double)a2 colors:(id)a3;

@end
