@class NSString, _UIBackdropView, _UILegibilitySettings;
@protocol SBFLegibilitySettingsProviderDelegate;

@interface SBFBackdropLegibilitySettingsProvider : NSObject <_UIBackdropViewObserver, SBFLegibilitySettingsProvider> {
    _UIBackdropView *_backdropView;
}

@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (weak, nonatomic) id<SBFLegibilitySettingsProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
