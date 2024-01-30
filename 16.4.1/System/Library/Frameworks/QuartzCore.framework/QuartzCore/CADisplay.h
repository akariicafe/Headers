@class NSArray, NSString, CADisplayMode, CADisplayAttributes, CADisplayPreferences, CADisplayPreset;

@interface CADisplay : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) NSArray *availableModes;
@property (retain, nonatomic) CADisplayMode *currentMode;
@property (readonly, nonatomic) CADisplayMode *preferredMode;
@property (copy, nonatomic) NSString *colorMode;
@property BOOL allowsVirtualModes;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } safeBounds;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) unsigned int displayId;
@property (readonly, nonatomic) long long displayType;
@property (readonly, nonatomic) unsigned int seed;
@property (readonly, nonatomic) unsigned int connectionSeed;
@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *containerId;
@property (readonly, nonatomic, getter=isSupported) BOOL supported;
@property (readonly, nonatomic) long long tag;
@property (readonly, nonatomic) int processId;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, nonatomic) double refreshRate;
@property (readonly, nonatomic) double heartbeatRate;
@property (readonly, nonatomic) long long minimumFrameDuration;
@property (readonly, nonatomic) BOOL hasNativeFrameRateRequest;
@property (readonly, nonatomic, getter=isOverscanned) BOOL overscanned;
@property (copy, nonatomic) NSString *overscanAdjustment;
@property (readonly, nonatomic) double overscanAmount;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } overscanAmounts;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } logicalScale;
@property (readonly, nonatomic) unsigned long long pointScale;
@property (readonly, nonatomic) double minimumLogicalScale;
@property (readonly, nonatomic) double maximumLogicalScale;
@property (readonly, nonatomic, getter=isCloned) BOOL cloned;
@property (readonly, nonatomic, getter=isCloning) BOOL cloning;
@property (readonly, nonatomic, getter=isCloningSupported) BOOL cloningSupported;
@property (readonly, nonatomic) NSString *nativeOrientation;
@property (readonly, nonatomic) NSString *currentOrientation;
@property (readonly, nonatomic) unsigned int odLUTVersion;
@property (readonly, nonatomic) BOOL supportsExtendedColors;
@property (readonly, nonatomic) CADisplayAttributes *externalDisplayAttributes;
@property (readonly, nonatomic) int linkQuality;
@property (nonatomic) double latency;
@property (copy, nonatomic) CADisplayPreferences *preferences;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } physicalSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } nativeSize;
@property (readonly, nonatomic) NSString *transportType;
@property (retain, nonatomic) CADisplayPreset *currentPreset;
@property (readonly, nonatomic) BOOL isReference;
@property (readonly, nonatomic) BOOL isReferenceLimited;

+ (id)displays;
+ (void)updateDisplays;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)TVOutDisplay;
+ (id)mainDisplay;

- (id)supportedHDRModes;
- (id)immutableCopy;
- (id)allowedHDRModes;
- (void)update;
- (id)_initWithDisplay:(void *)a0;
- (float)highestLocalPreferredFrameRateRequest;
- (void)dealloc;
- (id)flipBookWithCapacity:(unsigned long long)a0;
- (BOOL)setDisplayProperties:(id)a0;
- (id)preferredHDRModes;
- (id)preferredModeWithCriteria:(id)a0;
- (void)overrideDisplayTimings:(id)a0;
- (id)availablePresets;
- (void *)timingsControl;
- (id)flipBookWithOptions:(id)a0;
- (id)description;
- (void)_invalidate;
- (void)overrideMinimumFrameDuration:(long long)a0;
- (double)hardwareRefreshRate;

@end
