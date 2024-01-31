@interface AXBLocalizationCaptionController : NSObject {
    BOOL _wasEnabled;
}

+ (id)controller;

- (void)_updateFeature;
- (void)initializeMonitor;

@end
