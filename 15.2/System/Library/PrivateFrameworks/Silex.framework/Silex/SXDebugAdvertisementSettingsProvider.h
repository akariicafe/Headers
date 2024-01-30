@protocol SXAdvertisingSettings;

@interface SXDebugAdvertisementSettingsProvider : NSObject <SXDebugAdvertisementSettingsProvider>

@property (readonly, nonatomic) id<SXAdvertisingSettings> debugSettings;

- (void).cxx_destruct;
- (id)initWithDebugSettings:(id)a0;

@end
