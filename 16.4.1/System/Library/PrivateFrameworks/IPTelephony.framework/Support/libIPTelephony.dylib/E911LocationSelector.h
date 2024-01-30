@class CLEmergencyLocationSelectorConfig, NSBundle, CLEmergencyLocationSelector;

@interface E911LocationSelector : NSObject <CLEmergencyLocationSelectorDelegate> {
    NSBundle *_bundle;
    CLEmergencyLocationSelector *_location;
    CLEmergencyLocationSelectorConfig *_config;
    struct ImsLocationSelectorDelegate { void /* function */ **x0; } *_delegate;
    unsigned int _confidence;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)locationSelectorDidSelectLocation:(id)a0;
- (id)initWithDelegate:(struct ImsLocationSelectorDelegate { void /* function */ **x0; } *)a0 sipStack:(void *)a1 updateMode:(int)a2 dispatchQueue:(struct dispatch_queue_s { } *)a3;

@end
