@class AWBProcessor, NSDictionary, FigMetalContext, NSBundle;

@interface H13FastAWB : NSObject {
    FigMetalContext *_metal;
    int _awbMode;
    BOOL _usePrevious;
    NSDictionary *_metadata;
    AWBProcessor *_AWBProcessor;
    BOOL _allocatorSetupComplete;
    BOOL _configured;
    void /* unknown type, empty encoding */ _awbGOCGains;
    void /* unknown type, empty encoding */ _awbComboGains;
    void /* unknown type, empty encoding */ _awbGains;
    void /* unknown type, empty encoding */ _previousAwbGOCGains;
    void /* unknown type, empty encoding */ _previousAwbComboGains;
    void /* unknown type, empty encoding */ _previousAwbGains;
    NSBundle *_awbBundle;
}

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (void /* unknown type, empty encoding */)readAWBGOCGains;
- (int)compareAWBComboGains:(SEL)a0;
- (int)configForInputFrame:(id)a0 bounds:(id)a1 staticParameters:(id)a2 registers:(id)a3 usePrevious:(BOOL)a4;
- (void /* unknown type, empty encoding */)readAWBComboGains;
- (void /* unknown type, empty encoding */)readAWBGains;
- (void /* unknown type, empty encoding */)resetInvalidateAWBGains;
- (int)run:(id)a0 lscGainsTex:(id)a1 hrEnabled:(BOOL)a2 auxEnabled:(BOOL)a3 updatedMetadata:(id)a4;

@end
