@interface FxHostCapabilities : NSObject {
    struct FxHostCapabilitiesPriv { id x0; unsigned int x1; id x2; id x3; } *_hostCapPriv;
}

+ (void)setRemoteHostCapabilities:(id)a0;
+ (id)getRemoteHostCapabilities;

- (void)dealloc;
- (id)hostID;
- (unsigned long long)timeBase;
- (id)initWithAPIManager:(id)a0;
- (BOOL)upscalesFields;
- (BOOL)hostIsMotion;
- (BOOL)hostIsFCE;
- (BOOL)hostIsFCP;
- (unsigned int)hostVersionNumber;
- (BOOL)formatsFloatRGBABitmapsAsARGB;
- (BOOL)supportsHiddenParameters;
- (BOOL)supportsDisabledParameters;
- (BOOL)supportsGroupParameters;
- (BOOL)notifiesParameterChangedForGenerators;
- (BOOL)parameterChangedUsableForAllParameters;
- (BOOL)supportsTemporalBitmaps;
- (id)glContextPixelFormatAttributes;

@end
