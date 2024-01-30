@class NSArray, NSDictionary;

@interface HIDDisplayPresetInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
}

@property (readonly) NSArray *presets;

- (id)initWithContainerID:(id)a0;
- (void).cxx_destruct;
- (id)initWithService:(unsigned int)a0;
- (id)capabilities;
- (id)getHIDDevices;
- (id)initWithMatching:(id)a0;
- (BOOL)setupPresets;
- (void)createPresets;
- (id)getHIDElementForUsage:(long long)a0;
- (long long)getFactoryDefaultPresetIndex:(id *)a0;
- (long long)getActivePresetIndex:(id *)a0;
- (BOOL)setActivePresetIndex:(long long)a0 error:(id *)a1;
- (BOOL)setCurrentPresetIndex:(long long)a0 error:(id *)a1;
- (long long)getCurrentPresetIndex:(id *)a0;

@end
