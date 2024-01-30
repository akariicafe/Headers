@interface CoreAudioKit.CAAUNBandEQHeaderView : CoreAudioKit.CAAUEQHeaderView {
    void /* unknown type, empty encoding */ typeControl;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clear;
- (void).cxx_destruct;
- (void)reset;
- (void)setVisibilityFor:(unsigned int)a0 visible:(BOOL)a1 color:(id)a2;
- (void)addParameterWithId:(unsigned int)a0 name:(id)a1 shortName:(id)a2 symbolName:(id)a3 value:(float)a4 min:(float)a5 max:(float)a6 logBase:(float)a7 formatter:(id)a8 unit:(id)a9 additionalPad:(double)a10;
- (void)adjustViewIfHorizontallyCompressed:(struct CGSize { double x0; double x1; })a0;
- (void)createTypeControlFor:(unsigned int)a0 valueStrings:(id)a1 abbreviatedValueStrings:(id)a2 selectedIndex:(long long)a3 target:(id)a4 selector:(SEL)a5 color:(id)a6;
- (void)updateEQControlWithOldParam:(unsigned int)a0 newParam:(unsigned int)a1 value:(float)a2 color:(id)a3;
- (void)updateTypeControlFor:(unsigned int)a0 selectedIndex:(long long)a1 color:(id)a2;

@end
