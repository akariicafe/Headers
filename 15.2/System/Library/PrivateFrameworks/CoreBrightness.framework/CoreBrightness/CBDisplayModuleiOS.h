@class CBEDR;
@protocol CBBrightnessProxy;

@interface CBDisplayModuleiOS : CBDisplayModule {
    float _trustedLux;
    id<CBBrightnessProxy> _brtCtl;
    float _minNits;
    float _midNits;
    float _maxNits;
    float _maxNitsEDR;
    float _nitsSDR;
    float _dynSliderCap;
    BOOL _blrEnabled;
    BOOL _harmonyEnabled;
    CBEDR *_edr;
    float _appliedHeadroom;
    float _requestedHeadroom;
    float _appliedComp;
    BOOL _ecoMode;
}

@property (readonly) struct __Display { } *displayInternal;

- (id)className;
- (id)copyIdentifiers;
- (void)handleDisplayBrightnessUpdate:(id)a0;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)initialiseSDR;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (void)start;
- (id)initWithBacklight:(unsigned int)a0 queue:(id)a1 brtCtl:(id)a2;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (id)copyPropertyInternalForKey:(id)a0;
- (id)initWithBacklight:(unsigned int)a0 queue:(id)a1 display:(id)a2;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)dealloc;
- (void)handleEDRHeadroomRequest:(id)a0;
- (float)computeBrightnessCompensation;
- (void)stop;
- (void)initialiseEDR;

@end
